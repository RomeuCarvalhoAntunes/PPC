#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int k,l,m,n;
  int selascou;
  int d;
 
  cin >> k >>  l >> m >> n >> d;
  selascou=0;
  for (int i = 1; i <=d; i++) {
 
    if(!(i%k) || !(i%l) || !(i%m) || !(i%n)){
      selascou++;
    }
  }
 
  std::cout << selascou << '\n';
 
  return 0;
}