#include <bits/stdc++.h>

using namespace std;

int main(){


  int nProblemas;
  int minutosAteFesta;

  int contest = 72000;
  int max = 86400;

  cin >> nProblemas >> minutosAteFesta;

  minutosAteFesta = minutosAteFesta * 60;

  max = 86400 - contest - minutosAteFesta;

  int resolvidos=0;

  for(int i=1; i<=nProblemas; i++){

    max = max - i*5*60;

    if(max < 0){
      break;
    }
    resolvidos++;
  }

  std::cout << resolvidos << '\n';




  return 0;
}
