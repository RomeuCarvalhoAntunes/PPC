#include <bits/stdc++.h>

using namespace std;

int main(){

  int jogos=0;
  int contadorA=0;
  int contadorElse=0;

  string entrada;
  cin >> jogos >> entrada;

  for(int i=0; i<jogos; i++){
    if(entrada[i] == 'A'){
      contadorA++;
    } else {
      contadorElse++;
    }
  }

  if(contadorA == contadorElse){
    std::cout << "Friendship" << '\n';
  } else {

    if(contadorA > contadorElse){
      std::cout << "Anton" << '\n';
    } else {
      std::cout << "Danik" << '\n';
    }
  }





  return 0;
}
