#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    string manchete;
    string frase;
 
    getline(cin, manchete);
    getline(cin, frase);
    
    vector<char> letrasDisponiveis;
    vector<char> letrasNecessarias;
 
    bool consegue;
 
    for(int i=0; i<manchete.length();i++){
        if(manchete[i] != ' '){
            letrasDisponiveis.push_back(manchete[i]);
        }
    }
 
 
    for(int i=0; i<frase.length();i++){
        if(frase[i] != ' '){
            letrasNecessarias.push_back(frase[i]);
        }
    }
 
    for(int i=0;i<letrasNecessarias.size(); i++){
        int precisa=0;
        int tem=0;
 
        precisa = count(letrasNecessarias.begin(), letrasNecessarias.end(), letrasNecessarias.at(i));
        tem = count(letrasDisponiveis.begin(), letrasDisponiveis.end(), letrasNecessarias.at(i));
       
        if(precisa > tem){
            consegue = false;
            break;
        } else {
            consegue = true;
        }
    }
 
    if(consegue){
        cout << "YES" << endl;
    } else {
       cout << "NO" << endl; 
    }
    
 
 
    return 0;
}