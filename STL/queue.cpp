#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){

  queue<int> fila, q;
  int tamanho;

  tamanho = 0;
  std::cin >> tamanho;

  for(int i=0; i<tamanho; i++){
    int aux;

    cin >> aux;
    fila.push(aux);
    q.push(aux);
  }

  while(!q.empty()){
    std::cout << q.front() << " " << endl;
    q.pop();

  }

  std::cout << "Usando .front()" << '\n' << endl;
  std::cout << fila.front() << '\n' << endl;

  std::cout << "Usando .back" << '\n' << endl;
  std::cout << fila.back() << '\n' << endl;

  std::cout << "Fila está vazia ?" << '\n' << endl;
  std::cout << fila.empty() << '\n' << endl;

  std::cout << "Tamnho da fila" << '\n' << endl;
  std::cout << fila.size() << '\n' << endl;

  std::cout << "Esvaziando Fila" << '\n' << endl;
  while(!fila.empty()){
    std::cout << fila.front() << " ";
    fila.pop();
  }

  std::cout  << '\n';
  std::cout << "Fila está vazia ?" << '\n' << endl;
  std::cout << fila.empty() << '\n' << endl;

  std::cout << "Tamnho da fila" << '\n' << endl;
  std::cout << fila.size() << '\n' << endl;
  return 0;
}
