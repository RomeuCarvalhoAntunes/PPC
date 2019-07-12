#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
 
  string entrada;
  int tamanhoString;
  set <char> set;
  char aux;
 
 
  cin >> tamanhoString >> entrada;
 
  for(int i=0; i<tamanhoString;i++){
    aux = toupper(entrada[i]);
    set.insert(aux);
  }
 
  if(set.size() == 26){
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }
 
 
 
  return 0;
}