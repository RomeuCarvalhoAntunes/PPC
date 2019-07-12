#include <bits/stdc++.h>

using namespace std;

int main(){

  int tamanho=0;
  string entrada;
  int contadorX=0, letrasRemover=0;


  cin >> tamanho >> entrada;

  for(int i=0; i<tamanho; i++){
    if(entrada[i] == 'x'){
      contadorX++;
      if(contadorX >= 3){
        letrasRemover++;
      }
    } else {
      contadorX=0;
    }
  }

  std::cout << letrasRemover << '\n';

  return 0;
}
