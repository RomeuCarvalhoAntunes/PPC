#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<pair <int, int>> v;
  int quantidade;
  int aux;
  int idx1, idx2;
  int menor = 1000000000;

  cin >> quantidade;
  for(int i=0; i<quantidade; i++){
    cin >> aux;
    v.push_back(make_pair(aux,i));

  }

  sort(v.begin(),v.end());

  // VERIDICAR AS DIFERENCAS DAS POSICOE PARA ACHAR A MENOR





  return 0;
}
