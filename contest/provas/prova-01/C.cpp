#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int quantidade;
    set<int> s;
    int aux;
 
    cin >> quantidade;
 
    for(int i=0; i<quantidade; i++){
        cin >> aux;
        s.insert(aux);
    }
 
 
    cout << s.size() << endl;
 
 
    return 0;
}