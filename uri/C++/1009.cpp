#include <bits/stdc++.h>

using namespace std;

int main(){
	string nome;
	double s;
	double vendas;

	cin >> nome;
	cin >> s >> vendas;

	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << vendas*0.15 + s << endl;
	return 0;
}
