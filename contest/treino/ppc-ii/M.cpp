#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  set <char> conjuntoNUmerosDIferentes;
  string entrada;
 
  cin >> entrada;
 
  for (int i = 0; i < entrada.length(); i++) {
    conjuntoNUmerosDIferentes.insert(entrada[i]);
  }
 
 
  if(conjuntoNUmerosDIferentes.size()%2){
    std::cout << "IGNORE HIM!" << '\n';
  } else {
    std::cout << "CHAT WITH HER!" << '\n';
  }
 
  return 0;
}