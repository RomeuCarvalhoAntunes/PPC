// TODO FIX
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    string entrada1, entrada2;
 
    cin >> entrada1 >> entrada2;
 
    sort(entrada1.begin(), entrada1.end());
    sort(entrada2.begin(), entrada2.end());
 
    if(entrada1 == entrada2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}