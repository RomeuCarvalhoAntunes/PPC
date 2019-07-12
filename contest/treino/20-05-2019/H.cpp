#include <bits/stdc++.h>

using namespace std;

int main(){

  int quantidadeDiscurso;
  int quantidadeLinhas;
  std::vector<string> alfabeto1,alfabeto2, output;
  string aux, aux1,aux2;
  int distancia;

  cin >> quantidadeDiscurso;
  cin >> quantidadeLinhas;


  for(int i=1; i<=quantidadeLinhas*2; i++){
    cin >> aux;
    if(i%2 == 0){
      alfabeto2.push_back(aux);
    } else {
      alfabeto1.push_back(aux);
    }
  }

  for(int i=0; i<quantidadeDiscurso; i++){
    cin >> aux;

    auto it = find(alfabeto1.begin(), alfabeto1.end(), aux);
    distancia = it - alfabeto1.begin();

    aux1 = alfabeto1.at(distancia);
    aux2 = alfabeto2.at(distancia);

    if(aux1.length() <= aux2.length()){
      output.push_back(aux1);
    } else{
      output.push_back(aux2);
    }

  }


  for(int i=0; i<output.size(); i++){
    std::cout <<  output.at(i)<<" ";
  }

  std::cout  << '\n';



  return 0;
}
