#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int estacoes;
 
  int entra;
  int sai;
 
  int quantidade_trem,quantidade_min;
 
  quantidade_trem=0;
  quantidade_min = 0;
  cin >> estacoes;
 
  for(int i=0; i<(estacoes*2); i++){
    cin >> sai;
    cin >> entra;
 
    quantidade_trem = quantidade_trem - sai + entra;
 
 
  if(quantidade_trem > quantidade_min){
      quantidade_min = quantidade_trem;
    }
  }
 
  std::cout << quantidade_min << '\n';
 
  return 0;
}