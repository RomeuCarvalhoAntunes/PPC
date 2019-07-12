// TODO
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada;
  string aux;
 
  cin >> entrada;
 
  int somaString =0;
  int ideal = 10;
  int resposta=0;
 
  for(int i=0; i<entrada.length(); i++){
    aux = entrada[i];
    somaString = somaString + stoi(aux);
  }
 
  if(somaString <10) {
    resposta = ideal - somaString;
    cout << entrada + to_string(resposta) << endl;
  } 
 
  
 
  return 0;
}