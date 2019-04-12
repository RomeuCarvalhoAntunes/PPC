#include <bits/stdc++.h>

using namespace std;

int main(){

  string entrada;
  string lower;

  cin >> entrada;
  lower ="";

  for (int i = 0; i < entrada.length(); i++) {
    if(entrada[i] != 'A' && entrada[i] != 'a' && entrada[i] != 'o' && entrada[i] != 'y' && entrada[i] != 'e' &&
    entrada[i] != 'u' && entrada[i] != 'i' &&  entrada[i] != 'O' && entrada[i] != 'Y' &&
        entrada[i] != 'E' && entrada[i] != 'U' && entrada[i] != 'I'){
          lower += ".";
          lower += tolower(entrada[i]);
        } else {
        }
  }

  std::cout << lower << '\n';


  return 0;
}
