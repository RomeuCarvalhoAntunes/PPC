#include <bits/stdc++.h>

using namespace std;

int main(){

    int quantidadeDragoes=0;
    int forcaInicial=0;
    int forcaDragao=0;
    int bonusDragao=0;

    vector < pair <int, int>> dragoes;


    cin >> forcaInicial >> quantidadeDragoes;

    for(int i=0; i<quantidadeDragoes; i++){
        cin >> forcaDragao >> bonusDragao;
        dragoes.push_back(make_pair(forcaDragao, bonusDragao));
    }


    sort(dragoes.begin(), dragoes.end());

    for(int i=0; i<dragoes.size(); i++){
        if(dragoes[i].first < forcaInicial){
            forcaInicial += dragoes[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }

    }    

    cout << "YES" << endl;



    return 0;
}