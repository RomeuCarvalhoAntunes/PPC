#include <bits/stdc++.h>

using namespace std;

int main(){
    int myi, myj;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            int n;
            cin >> n;

            if(n){
                myi = i;
                myj = j;
            }
        }
    }

    cout << abs(myi-2) + abs(myj-2) << endl;

    return 0;
}