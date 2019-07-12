#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeAmigos;
  int dedos;
  int soma=0;
 
  cin >> quantidadeAmigos;
 
  for(int i=0; i<quantidadeAmigos; i++){
    std::cin >> dedos;
    soma += dedos;
  }
 
  int possibilidades=0;
 
  for(int i=1; i<=5; i++){
    if((soma+i)%(quantidadeAmigos+1) == 1){
      // nap pode
    } else {
      possibilidades++;
    }
  }
 
  std::cout << possibilidades << '\n';
  return 0;
}