#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada1, entrada2;
  cin >> entrada1 >> entrada2;
 
  for(int i=0; i<entrada1.length(); i++){
    entrada1[i] = toupper(entrada1[i]);
    entrada2[i] = toupper(entrada2[i]);
  }
 
 
  if(entrada1 == entrada2){
    std::cout << "0" << '\n';
    return 0;
  }
 
  for(int i=0; i<entrada1.length(); i++){
    if(entrada1[i] > entrada2[i]){
      std::cout << "1" << '\n';
      return 0;
    }
 
    if(entrada1[i] < entrada2[i]){
      std::cout << "-1" << '\n';
      return 0;
    }
  }
 
  return 0;
}