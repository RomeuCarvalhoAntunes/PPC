#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  string entrada;
  bool produz;
  produz = false;
 
std::cin >> entrada;
  for(int i=0; i<entrada.length(); i++){
    if(entrada[i] != 'H' && entrada[i] != 'Q'
    && entrada[i] != '9'){
      produz = false;
    } else {
      produz = true;
      std::cout << "YES" << '\n';
      return 0;
 
    }
  }
 
  if(!produz){
    std::cout << "NO" << '\n';
  }
  return 0;
}