#include <bits/stdc++.h>

using namespace std;

void ordena(int a, int b, int c){
  int max, mid, min;

  if(a>b && a> c){
    max = a;
    if(b > c){
      mid = b;
      min = c;
    } else {
      mid = c;
      min = b;
    }
  }

  if (b > a && b > c){
    max = b;
    if(a > c){
      mid = a;
      min = c;
    } else {
      min = a;
      mid = c;
    }
  }

  if (c > a && c > b){
    max = c;
    if(b > a){
      mid =b;
      min = a;
    } else {
      mid = a;
      min = b;
    }
  }

  cout << min << endl << mid << endl << max << endl;

}

int main(){

  int a,b,c;

  cin >> a >> b >> c;


  ordena(a,b,c);
  cout << endl << a << endl << b << endl << c << endl;



}
