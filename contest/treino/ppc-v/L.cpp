#include <bits/stdc++.h>

using namespace std; 

int main(){

    string entrada;
    int zeros=0, uns=0;
    cin >> entrada;

    for(int i=0; i<entrada.length(); i++){
        if(entrada[i] == 0){
            uns = 0;
            zeros++;
        } 
        if(entrada[i == 1]){
            zeros=0;
            uns++;
        }
    }

    if(zeros >= 7 || uns >= 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}