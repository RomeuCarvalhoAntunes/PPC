#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<pair <int, int>> v;
  int quantidade;
  int aux;
  int idx1, idx2;
  int resultado;
  int menor = 1000000000;


  idx1 = 0;
  idx2 = 0;
  cin >> quantidade;
  for(int i=0; i<quantidade; i++){
    cin >> aux;
    v.push_back(make_pair(aux,i));
  }

  sort(v.begin(),v.end());

  for(int i=0; i<quantidade; i++){
    if(v[i].second == quantidade-1){
      resultado = v[i].first - v[0].first;
      if(resultado <=menor){
        menor = resultado;
        idx1 = v[i].second;
        idx2 = v[0]. second;
        std::cout << idx1+1 << " " << idx2+1 << '\n';
        return 0;
      }
    } else {
      resultado = v[i+1].first - v[i].first;
      if (resultado < menor) {
        menor = resultado;
        idx1 = v[i+1].second;
        idx2 = v[i].second;
      }
    }
  }

  std::cout << idx1+1 << " " << idx2+1<< '\n';

  return 0;
}
