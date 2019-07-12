#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int cidades;
  int distancia;
  std::vector<int> v;
  int menor;
  int idxAux;
 
  cin >> cidades;
 
  menor = 1000000000;
 
  for(int i=0; i<cidades; i++){
    cin >> distancia;
    v.push_back(distancia);
    if(menor >= distancia){
      menor = distancia;
      idxAux = i;
    }
  }
 
  if(count(v.begin(), v.end(), menor) ==1) {
    std::cout << idxAux+1 << '\n';
  } else {
    std::cout << "Still Rozdil" << '\n';
  }
  return 0;
}