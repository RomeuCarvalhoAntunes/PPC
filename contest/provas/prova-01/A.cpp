#include <bits/stdc++.h>
 
using namespace std;
 
enum Tipos {Fogo, Agua, Terra, Ar};
 
enum Categoria {x, r, v, i};
 
int m_tipos[4][4] = {
    {x, v, i, r},
    {r, x, v, i},
    {i, r, x, v},
    {v, i, r, x}
};
 
double m_dano[4][1] = {
    {1.0},
    {0.5},
    {2.0},
    {0.0}
};
 
int main(){
    string T1, T2;
    double D;
 
    cin >> T1 >> T2 >> D;
 
    int ans;
 
    int T2i, T1i;
 
    switch(T1[0]){
        case 'F':
            T1i = Fogo;
        break;
        case 'A':
            if(T1[1] == 'r'){
                T1i = Ar;
            }else{
                T1i = Agua;
            }
        break;
        case 'T':
            T1i = Terra;
        break;
    }
 
    switch(T2[0]){
        case 'F':
            T2i = Fogo;
        break;
        case 'A':
            if(T2[1] == 'r'){
                T2i = Ar;
            }else{
                T2i = Agua;
            }
        break;
        case 'T':
            T2i = Terra;
        break;
    }
 
    ans = m_dano[m_tipos[T2i][T1i]][0] * D;
 
    cout << ans << "\n";
    
 
    return 0;
}