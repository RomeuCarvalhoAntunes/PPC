// TOOD

#include <bits/stdc++.h>

using namespace std;

int main(){

  int quantidadeComandos=0;
  string livro;
  string temp;

  vector<string> livros;
  vector<string> lidos;

  cin >> quantidadeComandos;

  for(int i=0; i<quantidadeComandos; i++){
    cin>> livro;
    cout << livro << endl;

    if(livro[0] == '+'){

      livros.push_back(livro);

    } else {
      int tamanho;
      tamanho = livros.size();

      if(tamanho > 0){
        temp = livros.at(tamanho-1);

      } else {
        temp = "Backlog vazio";
      }
      lidos.push_back(temp);
    }
  }


  for(int i=0; i<lidos.size(); i++){
    cout << lidos.at(i) << endl;
  }


  
  return 0;
}
