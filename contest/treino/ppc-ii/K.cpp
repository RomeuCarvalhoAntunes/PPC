#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  set<int> sapatos;
  int entrada;
 
  for (int i = 0; i < 4; i++) {
    std::cin >> entrada;
    sapatos.insert(entrada);
  }
 
  std::cout << 4-sapatos.size() << '\n';
 
 
  return 0;
}