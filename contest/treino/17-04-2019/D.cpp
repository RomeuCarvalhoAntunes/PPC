#include <bits/stdc++.h>

using namespace std;

int main(){

  int quantidade;
  int valor;
  string entrada;

  std::cin >> quantidade;
  valor=0;

  for(int i=0; i<quantidade; i++){
    std::cin >> entrada;
    if(entrada == "++X" || entrada=="X++"){
      valor++;
    } else {
      valor--;
    }
  }
  std::cout << valor << '\n';
  return 0;
}
