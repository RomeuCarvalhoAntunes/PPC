#include <bits/stdc++.h>
#include <string.h>
 
using namespace std;
 
int get_card_points(string card){
    int value;
    if(card[0] >= 50 && card[0] <= 57){
        char s[1];
        s[0] = card[0];
        value = atoi(s);
    }else{
        switch(card[0]){
            case 'A':
            return 1;
            default:
            return 10;
        }
    }
 
    return value;
}
 
int main(){
    vector<string> cards;
 
    int n = 52;
    while(n--){
        string s;
        cin >> s;
        cards.push_back(s);
    }
 
    int last = 0;
    for (auto c : cards){
        if(last + get_card_points(c) <= 21){
            last += get_card_points(c);
        }else{
            break;
        }
    }
    cout << last << endl;
 
    return 0;
}