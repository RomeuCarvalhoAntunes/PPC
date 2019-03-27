#include <bits/stdc++.h>

using namespace std;


int main(){

	int segundos;

	int hora, minutos, seg;

	cin >> segundos;

	hora = segundos/3600;
	minutos = (segundos%3600)/60;
	seg = (segundos%3600)%60;

	cout << hora << ":" << minutos << ":" << seg << endl;

	return 0;
}
