#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> numerosPrimos;
  int entrada1, entrada2;
  int resultado;

  cin >> entrada1 >> entrada2;

  numerosPrimos = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

  auto it = find(numerosPrimos.begin(), numerosPrimos.end(), entrada1);
  auto it2 = find(numerosPrimos.begin(), numerosPrimos.end(), entrada2);



  auto idx1 = it- numerosPrimos.begin();
  auto idx2 = it2 - numerosPrimos.begin();

  resultado = idx2-idx1;

  if(resultado==1){
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }

  return 0;
}
