#include <bits/stdc++.h>
 
#define DEBUG(x)        do { std::cerr << #x << " = " << x << std::endl;  } while(0)
#define INFO(msg)       do { std::cerr << msg << std::endl } while(0)
#define ll              long long
#define vi              vector<int>
#define pii             pair<int, int>
#define fori(i, s, e)   for(int i = s; i < e; i++)
#define ford(i, s, e)   for(int i = s; i >= e; i--)
#define all(v)          (v.begin(), v.end)
#define sasc(v)         sort(v.begin(), v.end())
#define sdesc(v)        sort(v.rbegin(), v.rend())
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m, x;
    cin >> n >> m;
    int ans = 0;
    int sm = 0;
    fori(i, 0, m) {
        cin >> x;
        sm += x;
        ans = min(ans, sm);
    }
    if(abs(ans) > n) {
        cout << -1 << endl;
        return 0;
    }
    cout << abs(ans) << endl;
 
    return 0;
}