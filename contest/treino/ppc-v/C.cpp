#include <bits/stdc++.h>

using namespace std;

int main(){

  string entrada;
  string validacao;
  string resposta;

  cin >> entrada >> validacao;

  for (int i = entrada.length(); i>=0; i--){
    resposta += entrada[i];
  }

  if(resposta.compare(validacao)){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
