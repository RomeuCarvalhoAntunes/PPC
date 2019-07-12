#include <bits/stdc++.h>

using namespace std;

int main(){

  string entrada;
  int contaA=0;
  int contaB=0;

  cin >> entrada;

  for(int i=0; i<entrada.length(); i++){
    if(entrada[i] == 'a'){
      contaA++;
    } else {
      contaB++;
    }
  }

  if(contaA > (entrada.length())/2){
    std::cout << entrada.length() << '\n';
  } else {
    std::cout << (contaA*2)-1 << '\n';
  }


  return 0;
}
