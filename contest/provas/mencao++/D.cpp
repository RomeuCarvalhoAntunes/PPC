#include <bits/stdc++.h>

using namespace std;

int main(){

  long long numeroRaiz;
  long long temp=0;
  long long k=1;

  cin >> numeroRaiz;


  while(1){
    temp = pow(k,3);
    if(temp == numeroRaiz){
      cout << k << endl;
      return 0;
    }

    if(temp > numeroRaiz){
      cout << -1 << endl;
      return 0;
    }

    
    k++;
  }

  cout << -1 << endl;



  return 0;
}
