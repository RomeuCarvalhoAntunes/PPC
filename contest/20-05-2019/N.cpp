#include <bits/stdc++.h>

using namespace std;

int main(){

  string entrada;
  int soma=0;
  int valor=0;
  int somaparcial=0;

  cin >>  entrada;

  for(int i=0; i<entrada.length(); i++){
    somaparcial = entrada[i];
    soma = soma + somaparcial;
  }

  std::cout << entrada[0] << '\n';

  valor = 10 - soma;

  if(valor == 0){
    // nothing
  } else {
    std::cout << entrada + to_string(valor) << '\n';
  }


  return 0;
}
