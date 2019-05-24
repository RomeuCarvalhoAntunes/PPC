#include <bits/stdc++.h>

using namespace std;

int main(){

  string entrada;

  std::vector<char> v {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  int distancia1=0, distancia2=0;
  int soma=0;
  auto it = v.begin();
  auto it2 = v.begin();

  cin >> entrada;

  for(int i=0; i<entrada.length(); i++){

    if(i == 0){
      auto it = find(v.begin(), v.end(),entrada[i]);
      auto it2 = it;

    } else {
      auto it = find(it2, v.end(),entrada[i]);
    }

    distancia1 = it - v.begin();
    distancia2 = it - v.end();
    it2 = it;


    if(abs(distancia1) >= abs(distancia2)){
      soma += abs(distancia2);
    } else {
      soma += abs(distancia1);
    }

  }

  std::cout << soma << '\n';



  return 0;
}
