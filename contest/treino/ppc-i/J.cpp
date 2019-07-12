#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string inpt;
    int n;
    cin >> n;
    cin >> inpt;
 
    int ans = 0;
    char last;
 
    for(int i = 0; i<inpt.length(); i++){
        if(i == 0){
            last = inpt[i];
        }else{
            if(last == inpt[i]){
                ans++;
            }
            else{
                last = inpt[i];
            }
        }
    }   
 
    cout << ans << endl;
}