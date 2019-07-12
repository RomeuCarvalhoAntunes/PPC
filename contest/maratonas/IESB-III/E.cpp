#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeExercito=0;
  int distorcao=0;
  long long valorTotal=0;
  vector <long long> peso;
 
  long long massa=0;
 
  cin >> quantidadeExercito;
  cin >> distorcao;
 
  for(int i=0; i < quantidadeExercito; i++){
    cin >> massa;
    peso.push_back(massa);
  }
 
  sort(peso.begin(),peso.end());
 
  for(int i=peso.size()-1; i>=0; i--){
    valorTotal = valorTotal + peso.at(i);
 
    if( valorTotal >= distorcao) {
      cout << peso.size() - i << endl;
      return 0;       
    }
  }
 
  if(distorcao > valorTotal){
    cout << -1 << endl;
  }
 
 
 
  return 0;
}