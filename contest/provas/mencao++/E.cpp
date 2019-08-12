#include <bits/stdc++.h>

using namespace std;

int main(){

  string linha;
  vector<string> frases;
  string original;
  vector<string> traduzidas;
  vector<string> vogais {"a", "e", "i", "o", "u"};

  int quantidadeLinhas;
  int pos =0;

  cin >> quantidadeLinhas;
  cin.ignore();

  for(int i=0; i<quantidadeLinhas; i++){
    string traducao;
    pos =0; 
    getline(cin, linha);

    for(int j=0; j<linha.length(); j++){
      if(linha[j] == ' '){
        traducao += linha[j];
      } else {
        traducao += linha[j] + vogais.at(pos);
        pos++;
        if(pos == 5){
          pos = 0;
        }
      }
    }

    frases.push_back(traducao);
  }

  for(int i=0; i<frases.size(); i++){
    cout << frases.at(i) << endl;
  }


  return 0;
}
