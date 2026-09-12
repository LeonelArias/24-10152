# Tarea 3


#Informcion general


- Parte Zilly (5 puntos + bonos)
1. Implementación de sfib en Zilly+
text
::zilly+

Z => Z fibo := fn(Z n) => Z -> if(n < 2, n, fibo(n - 1) + fibo(n - 2));

Z => Z sfib := fn(Z n) => Z -> if(n == 0, fibo(0), fibo(n) + sfib(n - 1));
Explicación: sfib(n) suma fibo(n) más sfib(n-1), y el caso base es sfib(0) = fibo(0) = 0.

Verificación:

sfib(0) = fibo(0) = 0 ✓

sfib(1) = fibo(1) + sfib(0) = 1 + 0 = 1 ✓

sfib(2) = fibo(2) + sfib(1) = 1 + 1 = 2 ✓

sfib(3) = fibo(3) + sfib(2) = 2 + 2 = 4 ✓

sfib(4) = fibo(4) + sfib(3) = 3 + 4 = 7 ✓

Sí, existe una relación. Observando la sucesión de valores:

n	fibo(n)	sfib(n)
0	0	0
1	1	1
2	1	2
3	2	4
4	3	7
5	5	12
6	8	20
7	13	33
Se observa que:

sfib(n) = fibo(n + 2) − 1

Comprobación:

sfib(0) = fibo(2) − 1 = 1 − 1 = 0 ✓

sfib(1) = fibo(3) − 1 = 2 − 1 = 1 ✓

sfib(4) = fibo(6) − 1 = 8 − 1 = 7 ✓

sfib(7) = fibo(9) − 1 = 34 − 1 = 33 ✓

Caso base (n=0): F(0) = 0 y F(2) − 1 = 1 − 1 = 0 ✓

Paso inductivo: Suponiendo sfib(n) = F(n+2) − 1, entonces:

text
sfib(n+1) = sfib(n) + F(n+1)
          = F(n+2) − 1 + F(n+1)
          = [F(n+2) + F(n+1)] − 1
          = F(n+3) − 1  ✓
Implementación de zfib (no recursiva, sólo depende de fibo):

text
::zilly+

Z => Z fibo := fn(Z n) => Z -> if(n < 2, n, fibo(n - 1) + fibo(n - 2));

Z => Z zfib := fn(Z n) => Z -> fibo(n + 2) - 1;
3. (Bono 2 puntos) ¿Es zfib más rápido que sfib?
SI.

Explicación:

sfib(n) es recursiva y en cada llamada invoca a fibo, que a su vez es una recursión exponencial de costo O(φⁿ) (donde φ ≈ 1.618 es el número áureo). Como sfib realiza n+1 llamadas a fibo, cada una de ellas de costo exponencial, el costo total de sfib(n) es:

Tsfib(n)∈O(n⋅ϕ n)T 

En cambio, zfib(n) hace una sola llamada a fibo(n+2) y una resta. Su costo es simplemente el de fibo, es decir:

Tzfib(n)∈O(ϕn)T 
zfib(n)∈O(ϕn)

Comparando:

Tsfib(n)
Tzfib(n)≈n
Tzfib(n)
Tsfib(n)≈n

Por lo tanto, zfib es asintóticamente n veces más rápido que sfib, ya que evita repetir el cálculo de fibo en cada iteración de la sumatoria. Para valores grandes de n, la diferencia es dramática: por ejemplo, para n = 30, sfib realiza 31 llamadas a fibo, mientras que zfib sólo realiza 1.

En pocas palabras: zfib es más rápido porque reemplaza la sumatoria de n+1 llamadas recursivas a fibo por una única llamada a fibo(n+2), gracias a la identidad sfib(n) = fibo(n+2) − 1.
