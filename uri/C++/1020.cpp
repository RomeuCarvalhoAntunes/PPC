#include <bits/stdc++.h>

using namespace std;

int main(){

	int dias;

	int a,m,d;

	cin >> dias;

	a = dias/365;
	m = (dias%365)/30;
	d = (dias%365)%30;

	cout << a << " ano(s)" << endl;
	cout << m << " mes(es)"<< endl;
	cout << d << " dia(s)"<< endl;

	return 0;

}
