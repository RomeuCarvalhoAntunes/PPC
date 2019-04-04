#include <bits/stdc++.h>

using namespace std;

int main(){

  double n1, n2, n3, n4;
  double nota_exame;
  double media;
  cout << fixed << setprecision(1);


  cin >> n1 >> n2 >> n3 >> n4;

  media=(n1*2+n2*3+n3*4+n4)/10;
  std::cout << "Media: " << media << '\n';

  if(media>=7.0){
    std::cout << "Aluno aprovado." << '\n';
  }

  if(media <5){
    std::cout << "Aluno reprovado." << '\n';
  }

  if(media >=5.0 && media <=6.9){
    std::cout << "Aluno em exame." << '\n';
    cin >> nota_exame;
    std::cout << "Nota do exame: " << nota_exame << '\n';
    media = (media+nota_exame)/2;

    if(media>=5){
      std::cout << "Aluno aprovado." << '\n';
    }
    if(media<=4.9){
      std::cout << "Aluno reprovado." << '\n';
    }

    std::cout << "Media final: " << media << '\n';
  }


    return 0;
}
