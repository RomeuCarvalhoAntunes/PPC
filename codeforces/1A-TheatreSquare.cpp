#include <bits/stdc++.h>

using namespace std;

long long round(long long lado, long long a){
  int resultado;
  if(lado%a != 0){
    resultado = (lado/a)+1;
  } else {
    resultado = lado/a;
  }

  return resultado;
}

int main(){

  long long m,n,a;
  long long ladoM, ladoN;


  cin >> m >> n >> a;

  ladoM = round(m,a);
  ladoN = round(n,a);



    std::cout << ladoM*ladoN << '\n';




  return 0;
}
