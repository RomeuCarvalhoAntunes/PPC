#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada;
  string resultado;
 
  int quantidade1;
  int quantidade2;
  int quantidade3;
  int total;
 
  std::cin >> entrada;
 
  quantidade1 =0;
  quantidade2 = 0;
  quantidade3 = 0;
 
  for(int i=0; i<entrada.length(); i++){
    if(entrada[i] == '1'){
      quantidade1++;
    }
 
    if(entrada[i] == '2'){
      quantidade2++;
    }
    if(entrada[i] == '3'){
      quantidade3++;
    }
  }
 
 
  for(int i=0; i<quantidade1; i++){
    if(i == quantidade1-1 && quantidade2==0 && quantidade3 ==0){
      resultado += "1";
    } else {
      resultado += "1+";
    }
  }
 
 
  for(int i=0; i<quantidade2; i++){
    if(i == quantidade2-1  && quantidade3 ==0){
      resultado += "2";
    } else {
      resultado += "2+";
    }
   }
 
 
 
  for(int i=0; i<quantidade3; i++){
    if(i == quantidade3-1){
      resultado += "3";
    } else {
      resultado += "3+";
    }
  }
 
  cout << resultado << '\n';
 
  return 0;
}