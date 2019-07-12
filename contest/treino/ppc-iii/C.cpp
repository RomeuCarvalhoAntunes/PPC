#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidade;
  int aux1, aux2,aux3;
  int resultado, quantidadeR;
  std::cin >> quantidade;
 
  quantidadeR=0;
  for(int i=0; i<quantidade; i++){
    std::cin >> aux1 >> aux2 >> aux3;
    resultado = aux1+aux2+aux3;
    if(resultado >=2){
      quantidadeR++;
    }
  }
 
  std::cout << quantidadeR << '\n';
  return 0;
}