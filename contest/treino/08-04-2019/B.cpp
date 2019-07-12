#include <bits/stdc++.h>

using namespace std;

int main(){
  string entrada1;
  string entrada2;
  string resultado;

  cin >> entrada1 >> entrada2;

  for(int i=0; i < entrada1.length(); i++){
      if(entrada1[i] == entrada2[i]){
        resultado += "0";
      } else {
        resultado += "1";
      }
  }

  std::cout << resultado << '\n';

  return 0;
}
