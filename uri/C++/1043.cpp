#include <bits/stdc++.h>

using namespace std;


int main () {
  double a,b,c;
  double perimentro;
  double area;

  cin >> a >> b >> c;
  cout << fixed << setprecision(1);




  if((abs(b-c) < a && a < b+c) &&
      (abs(a-c) < b && b < a +c) &&
        (abs(a-b) < c && c < a+b )){
    perimentro = a+b+c;
    cout << "Perimetro = " << perimentro << endl;
  } else {
    area = ((a+b)*c)/2;
    cout << "Area = " << area << endl;
  }

  return 0;


}
