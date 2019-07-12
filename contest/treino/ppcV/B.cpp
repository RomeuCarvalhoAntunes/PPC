#include <bits/stdc++.h>

using namespace std;

int main(){

  int quantidadeAlunos;
  int quantidadeComprados;
  int pecas; 
  vector <int> pecasQuebraCabeca;
  int difereca = 1000;

  cin >> quantidadeAlunos >> quantidadeComprados;

  for (int i=0; i<quantidadeComprados; i++){
    cin >> pecas;

    pecasQuebraCabeca.push_back(pecas);

  }

  sort(pecasQuebraCabeca.begin(), pecasQuebraCabeca.end());




  return 0;
}
