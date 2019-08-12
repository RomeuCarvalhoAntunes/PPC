#include <bits/stdc++.h>

using namespace std;

int main(){

    string entrada, entradalower;
    vector<char> consoantes;
    cin >> entrada;

    for(int i=0; i<entrada.length(); i++){
        entradalower += tolower(entrada[i]);
    }

    // cout << entradalower << endl;   

    for(int i=0; i<entradalower.length(); i++){

        if(entradalower[i] == 'a' || entradalower[i] == 'o' || entradalower[i] == 'y'
        || entradalower[i] == 'e' || entradalower[i] == 'u' || entradalower[i] == 'i'){
            // pass
        } else {
            consoantes.push_back(entradalower[i]);
        }
    }


    for(int i=0; i<consoantes.size(); i++){
        cout << "." << consoantes.at(i);
    }

    cout << endl; 

    return 0;
}