#include <bits/stdc++.h>

using namespace std;

int main(){
  int k,l,m;
  int n;
  int dragoes;
  set <int> dragoesNaMerda;
  int i;


  cin >> k >> l >> m >> n >> dragoes;
  i=1;
  while(dragoes--){
    if(!(i%k)){
      dragoesNaMerda.insert(i);
    }

    if(!(i%l)){
      dragoesNaMerda.insert(i);

    }

    if(!(i%m)){
      dragoesNaMerda.insert(i);

    }
    i++;
  }


  std::cout << dragoesNaMerda.size() << '\n';

  return 0;
}
