#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<double> notas;
  double dificuldade=0;
  double temp=0;
  double media=0;
  double nota=0;

  cin >> dificuldade;

  cout << setprecision(1) << fixed;

  for(int i=0; i<7; i++){
    cin >> temp;
    notas.push_back(temp);
  }

  sort(notas.begin(), notas.end());

  for(int i=1; i<notas.size()-1; i++){

    media += notas.at(i);

  }

  media = media/5.0;

  nota = media*dificuldade;

  cout << nota << endl;



  return 0;
}
