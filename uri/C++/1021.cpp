#include <bits/stdc++.h>

using namespace std;

int main(){


	double entrada;
	int entradaConvertida;
	int cem, ciq, vint, dez, cinco, dois;

	int moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;

	cin >> entrada;

	entradaConvertida = entrada * 100;

	cem = entradaConvertida/10000;
	ciq = (entradaConvertida%10000)/5000;
	vint = ((entradaConvertida%10000)%5000)/2000;
	dez = (((entradaConvertida%10000)%5000)%2000)/1000;
	cinco = ((((entradaConvertida%10000)%5000)%2000)%1000)/500;
	dois = (((((entradaConvertida%10000)%5000)%2000)%1000)%500)/200;


	moeda1 = ((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200/100);
	moeda50 = (((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200%100)/50);
	moeda25 = ((((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200%100)%50)/25);
	moeda10 = ((((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200%100)%50)%25)/10;
	moeda5 = (((((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200%100)%50)%25)%10)/5;
	moeda01 = ((((((((((entradaConvertida%10000)%5000)%2000)%1000)%500)%200%100)%50)%25)%10)%5);







	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00"<< endl;
	cout << ciq << " nota(s) de R$ 50.00"<< endl;
	cout << vint << " nota(s) de R$ 20.00"<<endl;
	cout << dez << " nota(s) de R$ 10.00"<<endl;
	cout <<  cinco << " nota(s) de R$ 5.00"<< endl;
	cout << dois << " nota(s) de R$ 2.00"<< endl;


	cout << "MOEDAS:" << endl;
	cout << moeda1 << " moeda(s) de R$ 1.00"<< endl;
	cout << moeda50 << " moeda(s) de R$ 0.50"<< endl;
	cout << moeda25 << " moeda(s) de R$ 0.25"<<endl;
	cout << moeda10 << " moeda(s) de R$ 0.10"<<endl;
	cout << moeda5 << " moeda(s) de R$ 0.05"<< endl;
	cout << moeda01 << " moeda(s) de R$ 0.01"<< endl;


	return 0;
}
