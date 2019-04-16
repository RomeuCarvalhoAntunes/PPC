#include <bits/stdc++.h>

using namespace std;

int main(){

  string numero;
  cin >> numero;

  bool lucky = true;


  for(int i=0; i < numero.length(); i++){
    if(numero[i] != '4' && numero[i] != '7'){
      lucky = false;
    }
  }

  if(lucky){
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }


  return 0;
}
