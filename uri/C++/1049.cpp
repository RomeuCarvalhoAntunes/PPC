#include <bits/stdc++.h>

using namespace std;

int main(){

  string  filo, reino, especie;

  std::cin >>  filo >> reino >> especie;


  if(filo == "vertebrado"){
    if(reino == "ave"){
        if(especie == "carnivoro"){
          std::cout << "aguia" << '\n';
        }

        if(especie == "onivoro"){
          std::cout << "pomba" << '\n';
        }
    }

    if(reino == "mamifero"){
      if(especie == "onivoro"){
        std::cout << "homem" << '\n';
      }

      if(especie == "herbivoro"){
        std::cout << "vaca" << '\n';
      }

    }

  }

  if(filo == "invertebrado"){
    if(reino == "inseto"){
        if(especie == "hematofago"){
          std::cout << "pulga" << '\n';
        }

        if(especie == "herbivoro"){
          std::cout << "lagarta" << '\n';
        }
    }

    if(reino == "anelideo"){
      if(especie == "hematofago"){
        std::cout << "sanguessuga" << '\n';
      }

      if(especie == "onivoro"){
        std::cout << "minhoca" << '\n';
      }

    }


  }

  return 0;
}
