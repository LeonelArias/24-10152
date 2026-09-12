::zilly+

Z => Z fibo := fn(Z n) => Z -> if(n < 2, n, fibo(n - 1) + fibo(n - 2));

Z => Z sfib := fn(Z n) => Z -> if(n == 0, fibo(0), fibo(n) + sfib(n - 1));sfib(0) = fibo(0) = 0 ✓

sfib(1) = fibo(1) + sfib(0) = 1 + 0 = 1 

sfib(2) = fibo(2) + sfib(1) = 1 + 1 = 2 

sfib(3) = fibo(3) + sfib(2) = 2 + 2 = 4 

sfib(4) = fibo(4) + sfib(3) = 3 + 4 = 7 

sfib(n+1) = sfib(n) + F(n+1)
          = F(n+2) − 1 + F(n+1)
          = [F(n+2) + F(n+1)] − 1
          = F(n+3) − 1  

Z => Z fibo := fn(Z n) => Z -> if(n < 2, n, fibo(n - 1) + fibo(n - 2));

Z => Z zfib := fn(Z n) => Z -> fibo(n + 2) - 1;
