#include <bits/stdc++.h>

using namespace std;

int main(){

  int numero;
  vector<int> v{4,7,47,74,444,447,474,477,744,747,774,777};
  bool lucky = false;

  cin >> numero;

  auto it =  find(v.begin(),v.end(),numero);

  if(it != v.end()){
    lucky = true;
    cout << "YES" << '\n';
  } else {
    for(int i=0; i<v.size(); i++){
      if(numero%v.at(i) == 0){
        lucky = true;
        cout << "YES" << '\n';
        return 0;
      } else {
        lucky = false;
      }
    }
    cout << "NO" << '\n';
  }


  return 0;
}
