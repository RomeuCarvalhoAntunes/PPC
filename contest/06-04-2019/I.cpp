#include <bits/stdc++.h>
#include <>

using namespace std;

int main(){
    string inpt;

    cin >> inpt;

    int counter = 0;

    for(int i = 0; i< inpt.length(); i++){
        if(inpt[i] == '4' || inpt[i] == '7'){
            counter++;
        }
    }

    string f = itoa(counter);

    cout << f << endl;

    return 0;
}