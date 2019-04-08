#include <bits/stdc++.h>

using namespace std;

int main(){

  double valorSalario;
  double imposto;
  double temp, temp1;

  cin >> valorSalario;

  cout << fixed << setprecision(2);


  if (valorSalario < 2000.00){
    std::cout << "Isento" << '\n';
  }

  if(valorSalario >= 2000.01 && valorSalario <= 3000.00){
    imposto = (valorSalario - 2000)*0.08;
    std::cout << "R$ " << imposto << '\n';
  }

  if(valorSalario > 3000.00 && valorSalario <= 4500.00 ){
    imposto = (valorSalario-3000)*0.18;
    temp = (valorSalario-3000);
    imposto += (valorSalario-2000-temp)*0.08;
    std::cout << "R$ " << imposto << '\n';
  }

  if(valorSalario > 4500.00){
    imposto = (valorSalario-4500)*0.28;

    temp = (valorSalario-4500);

    imposto += (valorSalario-3000-temp)*0.18;

    temp1 = (valorSalario-3000-temp);

    imposto +=  (valorSalario-temp1-temp-2000)*0.08;
    std::cout << "R$ " << imposto << '\n';
  }


  return 0;
}
