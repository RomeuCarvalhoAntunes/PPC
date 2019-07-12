#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeSoldados;
  std::vector<int> alturas;
  int aux = 0;
  int menor = 1000000000;
  int idx1 =0 ;
  int idx2 = 0;
  int diferenca = 0;
 
  cin >> quantidadeSoldados;
 
  for(int i=0; i<quantidadeSoldados; i++){
    cin >> aux;
    alturas.push_back(aux);
  }
 
  for(int i=0; i<quantidadeSoldados; i++){
    if(i == quantidadeSoldados-1){
      break;
    } else {
      diferenca = abs(alturas[i+1] - alturas[i]);
      if(diferenca < menor){
        idx1 = i;
        idx2 = i+1;
        menor = diferenca;
      }
    }
  }
 
  int verifica;
 
  verifica = abs(alturas[quantidadeSoldados-1] - alturas[0]);
  if(verifica < menor){
    idx1 = quantidadeSoldados;
    idx2 = 1;
    std::cout << idx1 << " " << idx2 << '\n';
 
  } else {
    std::cout << idx1+1 << " " << idx2+1 << '\n';
  }
 
 
  return 0;
}