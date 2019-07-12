#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
 
    cin >> n;
 
    int xac = 0, yac = 0, zac = 0;
 
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        xac += x;
        yac += y;
        zac += z;
    }
 
    if(xac == 0 && yac == 0 && zac == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
    return 0;
}