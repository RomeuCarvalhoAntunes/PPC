#include <bits/stdc++.h>

using namespace std;

int main(){

  int qtdpalavras;
  string palavra;

  cin >> qtdpalavras;

  for (int i = 0; i < qtdpalavras; i++) {
    cin >> palavra;
    if(palavra.length() > 10){
      std::cout << palavra[0] << palavra.length()-2 << palavra.back() << '\n';
    } else {
      std::cout << palavra << '\n';
    }
  }


  return 0;
}
