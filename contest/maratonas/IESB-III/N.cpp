#include <bits/stdc++.h>
#define PI 3.14159265
 
using namespace std;
 
int mdc(int num1, int num2) {
 
    int resto;
 
    do {
        resto = num1 % num2;
 
        num1 = num2;
        num2 = resto;
 
    } while (resto != 0);
 
    return num1;
}
 
int main(){
 
    int numeroCos = 0;
    double valorCos=0.0;
    int numerador=0;
    int erro=0;
 
    cin >> numeroCos;
    cin >> erro;
 
    erro = pow(10,erro+1);
 
    valorCos = cos(numeroCos*PI/180.0);
 
    numerador = valorCos*erro;
 
 
    
    int mdcValor=0;
    mdcValor = mdc(numerador,erro);
 
    cout << numerador/mdcValor << " " << erro/mdcValor << endl;
    
 
 
 
    return 0;
}