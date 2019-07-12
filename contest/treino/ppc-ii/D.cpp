#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int soldados;
  cin >> soldados;
  int alturas[soldados];
  int temp;
  int idxMaior, idxMenor;
  int resultado;
  int maiorAltura, menorAltura;
 
 
  for(int i=0; i<soldados; i++){
    cin >> temp;
    alturas[i] = temp;
 
    if(maiorAltura < temp){
      maiorAltura = temp;
      idxMaior = i;
    }
 
    if(menorAltura >= temp){
      menorAltura = temp;
      idxMenor = i;
    }
  }
 
  resultado = idxMaior + (soldados - idxMenor -1);
  if(idxMaior > idxMenor){
    resultado--;
  }
 
  std::cout << resultado << '\n';
 
  return 0;
}