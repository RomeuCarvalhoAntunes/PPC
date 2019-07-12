#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeArmarios;
 
  cin >> quantidadeArmarios;
 
  int porta1[quantidadeArmarios], porta2[quantidadeArmarios];
  int contadorFechadoPorta1, contadorFechadoPorta2;
  int contadorAbertoPorta1, contadorAbertoPorta2;
 
  contadorAbertoPorta1=0;
  contadorFechadoPorta1=0;
 
  contadorFechadoPorta2=0;
  contadorAbertoPorta2=0;
 
  for(int i=0; i<quantidadeArmarios; i++){
    std::cin >> porta1[i];
    std::cin >> porta2[i];
  }
 
  for(int i=0; i<quantidadeArmarios; i++){
    if(porta1[i] == 0){
      contadorFechadoPorta1++;
    } else{
      contadorAbertoPorta1++;
    }
  }
 
    for(int i=0; i<quantidadeArmarios; i++){
      if(porta2[i] == 0){
        contadorFechadoPorta2++;
      } else{
        contadorAbertoPorta2++;
      }
    }
 
    int resultado = min(contadorAbertoPorta1, contadorFechadoPorta1) + min(contadorAbertoPorta2, contadorFechadoPorta2);
 
    std::cout << resultado << '\n';
 
 
  return 0;
}