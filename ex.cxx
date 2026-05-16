#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

int main(){
  return 0;
}

double mean(const std::vector<double>& muestra) {
    if (muestra.empty()) return 0.0;
    double suma = 0.0;
    for (double valor : muestra) {
        suma += valor;
    }
    return suma / muestra.size();
}

double variance(const std::vector<double>& muestra){
 if (muestra.size() < 2) return 0.0;
   double mu = media(muestra);
    double suma_cuadrados = 0.0;
    for (double valor : muestra) {
        suma_cuadrados += (valor - mu) * (valor - mu);
    }
    return suma_cuadrados / (muestra.size() - 1);
}

double pearson_r(const std::vector<double>& A, const std::vector<double>& B) {
    if (VA.size() != VB.size() || VA.size() < 2) return 0.0;
    
    double mediaA = media(A);
    double mediaB = media(B);
    
    double numerador = 0.0;
    double denomA = 0.0;
    double denomB = 0.0;
    
    for (size_t i = 0; i < A.size(); ++i) {
        double diffA = A[i] - mediaA;
        double diffB = B[i] - mediaB;
        numerador += diffA * diffB;
        denomA += diffA * diffA;
        denomB += diffB * diffB;
    }
    
    if (denomA == 0.0 || denomB == 0.0) return 0.0;
    return numerador / std::sqrt(denomA * denomB);
}

#include <vector>
#include <string>
#include <algorithm>
#include <cctype>


vector<char> dec_to_septapus(int n){return {decimal_to_digits(n, 7);}
vector<char> dec_to_octopus(int n){return {decimal_to_digits(n, 8)};}
vector<char> dec_to_hexakaidecapus(int n){return {decimal_to_digits(n, 16)};}
vector<char> septapus_to_dec(vector<char> s){ int valor = digits_to_decimal(s, 7); return {decimal_to_digits(valor, 10};}
vector<char> octopus_to_dec(vector<char> s){ int valor = digits_to_decimal(s, 8); return {decimal_to_digits(valor, 10)};}
vector<char> hexakaidecapus_to_dec(vector<char> s){  int valor = digits_to_decimal(s, 16); return {decimal_to_digits(valor, 10)};}
vector<char> septapus_to_octopus(vector<char> s){int valor = digits_to_decimal(s, 7); return {decimal_to_digits(valor, 8)};}
vector<char> septapus_to_hexakaidecapus(vector<char> s){int valor = digits_to_decimal(s, 7); return {decimal_to_digits(valor, 16)};}
vector<char> octapus_to_septapus(vector<char> s){int valor = digits_to_decimal(s, 8); return {decimal_to_digits(valor, 7)};}
vector<char> octopus_to_hexakaidecapus(vector<char> s){int valor = digits_to_decimal(s, 8); return {decimal_to_digits(valor, 16);};}
vector<char> hexakaidecapus_to_septapus(vector<char> s){digits_to_decimal(s, 16);return {decimal_to_digits(valor, 7)};}
vector<char> hexakaidecapus_to_octopus(vector<char> s){int valor = digits_to_decimal(s, 16);return {decimal_to_digits(valor, 8)};}
