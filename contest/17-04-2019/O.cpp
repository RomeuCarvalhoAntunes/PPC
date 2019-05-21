#include <bits/stdc++.h>

using namespace std;

int main(){

  int quantidadeCartas;
  int carta;
  int quantidade5=0;
  int divisivel=0;
  int quantidade0=0;

  cin >> quantidadeCartas;

  for(int i=0; i < quantidadeCartas; i++){
    cin >> carta;
    if(carta == 5){
      quantidade5++;
    }
    if(carta == 0){
      quantidade0++;
    }
  }

  divisivel = quantidade5/9;


  if(quantidade5 == 0){
    if(quantidade0 == 0){
      std::cout << -1 << '\n';
    } else {
      std::cout << 0 << '\n';
    }
    std::cout << '\n';
  } else {
    if(quantidade0 > 0){
      int cartas5;
      cartas5 = 9*divisivel;
      
      for(int i=0; i<cartas5; i++){
        std::cout << 5;
      }

      for(int i=0; i<quantidade0; i++){
        std::cout << 0;
      }
    } else {
      std::cout << -1 << '\n';
    }
    std::cout << '\n';
  }



  return 0;
}
