  #include <bits/stdc++.h>

  using namespace std;


  int main(){

    int casos;
    int tamnho;
    int j;
    string caminho;
    string caminho2;
    j = 1;

    cin >> casos;

    while (casos--) {
      std::cin >> tamnho;
      std::cin >> caminho;
      caminho2 = "";
      for (int i = 0; i < caminho.length(); i++) {
        if(caminho[i] == 'E'){
          caminho2 += "S";
        }
        if(caminho[i] == 'S'){
          caminho2 += "E";
        }
      }
      std::cout << "Case #" << j << ": " << caminho2 << endl;
      j++;
    }



    return 0;

  }
