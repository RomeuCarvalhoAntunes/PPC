#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  long long entrada;
  long long idx;
 
  cin >> entrada >> idx;
 
  if(entrada%2  == 0){
    // PAR
      entrada = entrada/2;
  } else {
    // IMPAR
    entrada = entrada/2+1;
  }
  if(idx <= entrada){
      std::cout << (idx-1)*2+1 << '\n';
  } else {
    std::cout << (idx-entrada)*2 << '\n';
  }
 
 
  return 0;
}