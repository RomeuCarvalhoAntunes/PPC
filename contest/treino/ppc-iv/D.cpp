#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada;
  int entrada2;
  int soma = 0;
  int aux = 0;
  int valor = 0;
 
  cin >> entrada2 >> entrada;
 
  for(int i=0; i<entrada.length(); i++){
 
    aux = entrada[i];
 
    if((int)aux % 2 == 0){
      soma = soma + (i+1);
    }
  }
 
  cout << soma << endl;
 
 
 
  return 0;
}