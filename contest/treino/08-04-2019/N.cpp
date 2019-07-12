#include <bits/stdc++.h>

using namespace std;

int main(){

  string nome1;
  string nome2;
  string sembaralhada;
  multiset <char, greater<char>> nomes;
  multiset <char, greater<char>> embaralhada;

  cin >> nome1 >> nome2;
  std::cin >> sembaralhada;

  for(int i=0; i<nome1.length(); i++){
    nomes.insert(nome1[i]);
  }

  for(int i=0; i<nome2.length(); i++){
    nomes.insert(nome2[i]);
  }

  for(int i=0; i<sembaralhada.length(); i++){
    embaralhada.insert(sembaralhada[i]);
  }



  if(nomes == embaralhada){
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }


  return 0;
}
