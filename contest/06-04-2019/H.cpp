#include <bits/stdc++.h>

using namespace std;

int main(){
    string inpt;

    cin >> inpt;

    if(inpt[0] >= 97 && inpt[0] <= 122){
        inpt[0] -= 32;
    }

    cout << inpt << endl;

    return 0;
}