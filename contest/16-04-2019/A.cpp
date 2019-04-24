#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n1,n2,n3,n4;

  long long a,b,c;

  cin >> n1 >> n2 >> n3 >> n4;

  // Achar o numero 1
  c = abs(n1-n2-n3);
  a = n3-c;
  b = n2-c;

  do {
    int aux = n1;
    n1 = n2;
    n2 = n3;
    n3 = n4;
    n4 = aux;

    c = abs(n1-n2-n3);
    a = n3-c;
    b = n2-c;
  } while(a <= 0 || b <= 0);



  std::cout << a << " " << b << " " << c << '\n';






  return 0;
}
