#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int quantidadeCaixas=0;
  int tamanhoMaxPilha=0;
  int tamanhoAtualPilha=0;
  int caixaBaixa =100000;
  int novaCaixa=0;
  int massaEmpilhada=0;

  cin >> quantidadeCaixas >> tamanhoMaxPilha;
  for(int i=0; i<quantidadeCaixas; i++){
    cin >> novaCaixa;

    if(novaCaixa <= caixaBaixa){
      caixaBaixa = novaCaixa;
      massaEmpilhada += novaCaixa;
      tamanhoAtualPilha++;
    }

    if(tamanhoAtualPilha == tamanhoMaxPilha){
      break;
    }
  }


  cout << massaEmpilhada << endl;


  return 0;
}
