#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string palavraEntrada;
  string inicial;
  string corrigida;
  char aux;
  bool corrige = false;
 
  cin >> palavraEntrada;
 
  inicial = palavraEntrada;
 
  if(palavraEntrada.length() > 1 ){
    if(palavraEntrada[0] >= 97 && palavraEntrada[0] <= 122 ){
        // primeira minuscula
        corrigida = toupper(palavraEntrada[0]);
        for(int i=1; i<palavraEntrada.length(); i++){
          if(palavraEntrada[i] >= 60 && palavraEntrada[i] <= 90){
            aux = tolower(palavraEntrada[i]);
            corrige = true;
            corrigida = corrigida + aux;
          } else {
            corrige = false;
            break;
          }
        }
      } else {
        // Primeira maiuscula
        corrigida = tolower(palavraEntrada[0]);
        for(int i=1; i<palavraEntrada.length(); i++){
          if(palavraEntrada[i] >= 60 && palavraEntrada[i] <= 90){
            aux = tolower(palavraEntrada[i]);
            corrige = true;
            corrigida = corrigida + aux;
          } else {
            corrige = false;
            break;
          }
        }
      }
      if(corrige){
        std::cout << corrigida << '\n';
      } else {
        std::cout << inicial << '\n';
      }
  } else {
    if(palavraEntrada[0] >= 97 &&  palavraEntrada[0] <= 122){
      aux = toupper(palavraEntrada[0]);
      cout << aux << '\n';
    } else{
      aux = tolower(palavraEntrada[0]);
      cout << aux << '\n';
    }
  }
 
 
 
 
 
 
 
 
 
 
  return 0;
}