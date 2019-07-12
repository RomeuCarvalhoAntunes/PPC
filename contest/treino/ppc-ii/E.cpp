#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeProdutos;
  double percentualProdutos;
  double total;
 
  cin >> quantidadeProdutos;
 
  total = 0;
 
 
  for(int i=0; i<quantidadeProdutos; i++){
    std::cin >> percentualProdutos;
    total += percentualProdutos;
  }
 
  std::cout << total/quantidadeProdutos << '\n';
 
  return 0;
}