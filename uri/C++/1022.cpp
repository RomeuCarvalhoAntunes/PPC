#include <bits/stdc++.h>

using namespace std;

int numerador(int n1, int d1, int n2, int d2, char operador){
	int somaNumerador;
	int subNumerador;
	int multNumerador;

	if(operador == '+'){
		somaNumerador = (n1*d2 + n2*d1);
		return somaNumerador;

	}

	else if (operador == '-') {
		subNumerador = (n1*d2 - n2*d1);
		return subNumerador;
	}

	else if (operador == '*'){
		multNumerador = n1*n2;
		return multNumerador;
	}
}

int denominador(int d1, int d2){
	int somaDenominador;

	somaDenominador = (d1*d2);

	return somaDenominador;
}


int divisaoNumerador( int n1, int d2){
	int numeradorDiv;
	numeradorDiv = (n1*d2);
	return numeradorDiv;
}

int divisaoDenominador(int d1, int n2){
	int denominadorDiv;
	denominadorDiv = (d1*n2);
	return denominadorDiv;

}


int mdc(int n1, int d1){
	int resto;

	do {
		resto = n1%d1;
		n1=d1;
		d1=resto;
	} while (resto != 0);

	return n1;
}



int main(){

	int n1, d1, n2, d2;
	int simplificador;
	int casos;
	char operador;

	cin >> casos;

	for(int i=0; i<casos; i++){
		scanf("%d / %d %c %d / %d", &n1, &d1, &operador, &n2, &d2);
		if (operador == '/'){


			simplificador = mdc(divisaoNumerador(n1,d2),divisaoDenominador(d1,n2));

			if((divisaoNumerador(n1,d2) < 0 ) || (divisaoDenominador(d1,n2) < 0)){

				cout << divisaoNumerador(n1,d2) << "/" << divisaoDenominador(d1,n2) <<
				" = " << "-" << abs((divisaoNumerador(n1,d2))/simplificador) << "/"
				<< abs((divisaoDenominador(d1,n2))/simplificador) << endl;

			} else {

				cout << divisaoNumerador(n1,d2) << "/" << divisaoDenominador(d1,n2) <<
				" = " << abs((divisaoNumerador(n1,d2))/simplificador) << "/"
				<< abs((divisaoDenominador(d1,n2))/simplificador) << endl;

			}


		} else {

			simplificador = mdc(numerador(n1,d1,n2,d2,operador),denominador(d1,d2));

			if((numerador(n1,d1,n2,d2,operador) < 0 )|| (denominador(d1,d2) < 0)){
				cout << numerador(n1,d1,n2,d2,operador) << "/" << denominador(d1,d2) <<
				" = " << "-"<<abs((numerador(n1,d1,n2,d2,operador))/simplificador) << "/"
				<< abs((denominador(d1,d2))/simplificador) << endl;
			} else {

				cout << numerador(n1,d1,n2,d2,operador) << "/" << denominador(d1,d2) <<
				" = " << abs((numerador(n1,d1,n2,d2,operador))/simplificador) << "/"
				<< abs((denominador(d1,d2))/simplificador) << endl;
			}


		}

	}

	return 0;
}
