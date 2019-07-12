#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int n1,n2,n3;
 
  int a,b,c;
  int valor;
 
  cin >> n1 >> n2 >> n3;
 
 
 
    b = sqrt((n1*n3)/n2);
    a = sqrt((n3*n2)/n1);
    c = sqrt((n1*n2)/n3);
 
    valor = 4*a+4*b+4*c;
 
    std::cout << valor << '\n';
 
 
 
 
 
 
  return 0;
}