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
 
int n, h;
vi p;
 
void dfs() {
    if((int)p.size() == h) {
        for(auto i : p) cout << i << " ";
        cout << endl;
        return;
    }
 
    fori(i, p[p.size() - 1] + 1, n + 1) {
        p.push_back(i);
        dfs();
        p.pop_back();
    }
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> h;
    
    fori(i, 1, n+1) {
        p.clear();
        p.push_back(i);
        dfs();
    }
 
    return 0;
}