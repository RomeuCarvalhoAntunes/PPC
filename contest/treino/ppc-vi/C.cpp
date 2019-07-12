#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada;
 
  bool funcionou = false;
 
  string validacao = "hello";
 
  cin >> entrada;
 
  int k=0;
    
    for(int i=0;i <entrada.length(); i++){
      if(entrada[i] == validacao[k]){
        k++;
      }
 
    }
 
 
  if(k>4){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
 
  }
 
  return 0;
}