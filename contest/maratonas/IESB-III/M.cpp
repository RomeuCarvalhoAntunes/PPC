#include <bits/stdc++.h>
 
#define DEBUG(x)        do { std::cerr << #x << " = " << x << std::endl;  } while(0)
#define DEBUGV(x)       for(auto e : x) { std::cerr << e << " "; }; cout << endl;
#define INFO(msg)       do { std::cerr << msg << std::endl } while(0)
#define ll              long long
#define vi              vector<int>
#define pii             pair<int, int>
#define fori(i, s, e)   for(int i = s; i < e; i++)
#define ford(i, s, e)   for(int i = s; i >= e; i--)
#define all(v)          (v.begin()), (v.end)
#define sasc(v)         sort(v.begin(), v.end())
#define sdesc(v)        sort(v.rbegin(), v.rend())
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    bool ra = false;
    int ans = 0;
    int cr = 0;
    string s;
 
    cin >> s;
 
    for(auto c : s) {
        if(c == 'r') {
            ans += cr;
            cr = 0;
            ra = true;
        }
        if(c == 's') {
            cr = 0;
            ra = false;
        }
        if(c == '.' && ra) cr++;
    }
 
    ans += cr;
    cout << ans << endl;
 
    return 0;
}