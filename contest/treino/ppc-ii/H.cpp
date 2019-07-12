#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
  int quantidadeContest;
  int amazingContests;
  int nota, temp, best, worst;
  amazingContests = 0;
 
  cin >> quantidadeContest;
  cin >> nota;
 
  best= nota;
  worst = nota;
  temp = nota;
  for (int i=0; i < (quantidadeContest-1); i++){
    cin >> nota;
    if(best < nota){
      amazingContests++;
      best=nota;
    }
    if(worst > nota){
      amazingContests++;
      worst=nota;
    }
 
    temp = nota;
  }
 
  std::cout << amazingContests << '\n';
  return 0;
}