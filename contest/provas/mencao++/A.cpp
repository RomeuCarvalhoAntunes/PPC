#include <bits/stdc++.h>

using namespace std;


// "Bazinga!"
//  "Raj trapaceou!"
//  "De novo!"


int main(){

  string entradaSheldon;
  string entradaRaj;

  cin >> entradaSheldon >> entradaRaj;

  if(entradaSheldon == "tesoura"){
    if(entradaRaj == "tesoura"){
      cout << "De novo!" << endl;
    }
    if(entradaRaj == "papel"){
      cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "lagarto"){
      cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "Spock"){
      cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "pedra"){
        cout << "Raj trapaceou!" << endl;
    }
  }

if(entradaSheldon == "papel"){
    if(entradaRaj == "tesoura"){
      cout << "Raj trapaceou!" << endl;
    }
    if(entradaRaj == "papel"){
      cout << "De novo!" << endl;
    }

    if(entradaRaj == "lagarto"){
      cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "Spock"){
       cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "pedra"){
       cout << "Bazinga!"<< endl;
    }
  }

if(entradaSheldon == "lagarto"){
   
    if(entradaRaj == "tesoura"){
      cout << "Raj trapaceou!" << endl;
    }
    if(entradaRaj == "papel"){
       cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "lagarto"){
      cout << "De novo!" << endl;
    }

    if(entradaRaj == "Spock"){
        cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "pedra"){
      cout << "Raj trapaceou!" << endl;
    }
  }

if(entradaSheldon == "Spock"){
    if(entradaRaj == "tesoura"){
      cout << "Bazinga!"<< endl;
    }
    if(entradaRaj == "papel"){
       cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "lagarto"){
       cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "Spock"){
      cout << "De novo!" << endl;
    }

    if(entradaRaj == "pedra"){
       cout << "Bazinga!"<< endl;
    }
  }




if(entradaSheldon == "pedra"){
    if(entradaRaj == "tesoura"){
       cout << "Bazinga!"<< endl;
    }
    if(entradaRaj == "papel"){
      cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "lagarto"){
       cout << "Bazinga!"<< endl;
    }

    if(entradaRaj == "Spock"){
      cout << "Raj trapaceou!" << endl;
    }

    if(entradaRaj == "pedra"){
      cout << "De novo!" << endl;
    }
  }




  return 0;
}
