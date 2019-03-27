#include <bits/stdc++.h>

using namespace std;

int main(){

	int valorEntrada;

	int cem,ciq,vint,dez, cinco, dois, um;

	cin >> valorEntrada;

	cem = valorEntrada/100;
	ciq = (valorEntrada%100)/50;
	vint = ((valorEntrada%100)%50)/20;
	dez = (((valorEntrada%100)%50)%20)/10;
	cinco = ((((valorEntrada%100)%50)%20)%10)/5;
	dois = (((((valorEntrada%100)%50)%20)%10)%5)/2;
	um = ((((((valorEntrada%100)%50)%20)%10)%5)%2);

	cout << valorEntrada << endl;
	cout << cem << " nota(s) de R$ 100,00"<< endl;
	cout << ciq << " nota(s) de R$ 50,00"<< endl;
	cout << vint << " nota(s) de R$ 20,00"<<endl;
	cout << dez << " nota(s) de R$ 10,00"<<endl;
	cout <<  cinco << " nota(s) de R$ 5,00"<< endl;
	cout << dois << " nota(s) de R$ 2,00"<< endl;
	cout << um << " nota(s) de R$ 1,00"<<  endl;


	return 0;
}
