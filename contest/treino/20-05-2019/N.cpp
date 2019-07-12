#include <bits/stdc++.h>

using namespace std;

int main(){


  string entrada;
  int aux=0;
  int 
  int perfect = 10;
  int resultado= 0;

  cin >> entrada;

  for(int i=0; i<entrada.length(); i++){
    aux = stoi(entrada[i]);
  }


  resultado = perfect - aux;


  std::cout << entrada + to_string(resultado) << '\n';



  return 0;
}
