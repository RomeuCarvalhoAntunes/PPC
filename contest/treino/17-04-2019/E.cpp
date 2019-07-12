#include <bits/stdc++.h>

using namespace std;

int main(){

  long long quantidade;
  long long numeroEntrada, numeroBuscado;
  std::map<long long, long long> m;
  long long busca;
  long long quantidadeA, quantidadeB;

  cin >> quantidade;
  quantidadeA = 0;
  quantidadeB = 0;

  for(long long i=0 ; i<quantidade; i++){
    cin >> numeroEntrada;
    m.insert(make_pair(numeroEntrada, i));
  }

  cin >> busca;


  for(long long i=0; i<busca; i++){
    cin >> numeroBuscado;
    quantidadeA += m[numeroBuscado]+1;
    quantidadeB += m.size()-m[numeroBuscado];
  }


  std::cout << quantidadeA << " " << quantidadeB << '\n';

  return 0;
}
