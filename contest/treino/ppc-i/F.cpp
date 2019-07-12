//TODO
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int m[3][3];
 
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            m[i][j] = 1;
        }
    }
 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int n;
            cin >> n;
 
            if(n&1){
                for(int a = i-1; a<=i+1; a++){
                    for(int b = j-1; b<=j+1; b++){
                        if(a>=0 && a<=2 && b>=0 && b<=2){
                            if((a==j+1 && b==i+1) || (a==j-1 && b==i-1) || (a==j+1 && b==i-1) || (a==j-1 && b==i+1)){
                                 
                            }
                            else{
                                if(m[a][b]){
                                    m[a][b] = 0;
                                }
                                else{
                                    m[a][b] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}