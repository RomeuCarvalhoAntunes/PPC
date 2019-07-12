#include <bits/stdc++.h>

using namespace std;

int main(){
  // Quantidade de pessoas
  int n;

  // quantidade de garrafas
  int k;

  // quantidade de drink em cada garrafa
  int l;

  // quantidade de limoes
  int c;

  //fatias de limão
  int d;

  // quantidade de gramas de sal
  int p;

  // mls necessarias do drink
  int nl;

  // quantidade de sal necessaria
  int np;




  cin >> n >> k >> l >> c >> d >> p >> nl >> np;


  int drink = k*l/nl;
  int salt = p/np;
  int limes = d*c;

  int resultado;
  resultado = min(min(drink,limes),salt)/n;

  std::cout << resultado << '\n';

  return 0;
}
