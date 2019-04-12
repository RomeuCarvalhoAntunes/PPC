#include <bits/stdc++.h>

using namespace std;

int main(){

  int numeroParticipantes;
  std::cin >> numeroParticipantes;

  int posicaoScore;
  std::cin >> posicaoScore;

  int scores[numeroParticipantes];
  int best;
  int resultado=0 ;

  for(int i=0; i<numeroParticipantes; i++){
        cin >> scores[i];
  }


  best = scores[posicaoScore-1];

  for(int i=0; i<numeroParticipantes; i++){
    if(scores[i] >= best && scores[i] >0){
      resultado++;
    }
  }

  std::cout << resultado << '\n';

  return 0;
}
