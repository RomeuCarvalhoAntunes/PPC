#include <bits/stdc++.h>

using namespace std;

int main(){
  string jogadores;
  int resultado1, resultado2;
  bool dangerous=false;

  cin >> jogadores;

  resultado1=0;
  resultado2=0;

  for(int i=0; i<jogadores.length(); i++){
    if(jogadores[i] == '0'){
      resultado2=0;
      resultado1++;
        if(resultado1>=7){
          dangerous=true;
        }
    } else {
      resultado1=0;
      resultado2++;
      if(resultado2>=7){
        dangerous=true;
      }
    }
  }

  if(dangerous){
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }
  return 0;
}
