#include <bits/stdc++.h>

using namespace std;

int main(){


  std::vector<pair<int,int>> v;
  int quantidade;
  int necessidadeBalas;
  int menosBalas;

  cin >> quantidade;
  cin >> necessidadeBalas;

  for(int i=0; i<quantidade; i++){
      cin >> necessidadeBalas;
      v.push_back(make_pair(necessidadeBalas, i));
  }

  int j=0;

  do {

    sort(v.begin(),v.end());
    if(v[j].first<=0){

    }
    j++;
  } while(v.size()!=1);

  std::cout << v[0].first << '\n';
  std::cout << v[0].second+1 << '\n';

  return 0;
}
