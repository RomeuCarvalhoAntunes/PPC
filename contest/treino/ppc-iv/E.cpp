#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int casos;
  string nome;
 
  std::vector<string> v;
  std::vector<string> possuido;
 
  cin >> casos;
 
  for (int i = 0; i < casos; i++) {
    cin >> nome;
    auto it = find(v.begin(), v.end(), nome);
 
    if(it != v.end()){
      // achou
      possuido.push_back("YES");
    } else {
      v.push_back(nome);
      possuido.push_back("NO");
    }
  }
 
 
  for(int i=0; i<possuido.size(); i++){
      std::cout << possuido.at(i) << '\n';
  }
 
 
 
  return 0;
}