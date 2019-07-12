#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int quantidadePag;
 
  int numeroPaginasDia[7];
 
  std::cin >> quantidadePag;
 
  for(int i=1; i<=7; i++){
    cin >> numeroPaginasDia[i];
  }
 
 
  for(int i=1; i<=7; i++){
    quantidadePag = quantidadePag-numeroPaginasDia[i];
    if(quantidadePag <= 0){
      std::cout << i << '\n';
      return 0;
    }
 
    if(i==7){
      i=0;
    }
  }
  return 0;
}