#include <bits/stdc++.h>
#include <string.h>

using namespace std;


int main(){

  int casos;
  int cheque1, cheque2, valorCheque;
  string svalorCheque;
  int k;

  cin >> casos;
  k=1;


  while (casos --) {
    cheque2 = 0;
    int j=0;

    cin >> svalorCheque;

    for (int i = svalorCheque.length()-1; i >= 0; i--) {
      if(svalorCheque[i] == '4'){
        cheque2 += pow(10,j);
      }

      j++;
    }

    valorCheque = stoi(svalorCheque);
    cheque1 = valorCheque - cheque2;

    printf("Case #%d: %d %d\n", k , cheque1, cheque2 );
    k++;

  }

  return 0;
}
