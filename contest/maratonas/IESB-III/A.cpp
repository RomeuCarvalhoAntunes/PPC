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
 
#define MAX (int)1e5+10
 
using namespace std;
 
vector<vector<int>> adj;
vi v;
 
ll sum = 0;
ll ans = 0;
 
void dfs(int x) {
    v[x] += sum;
    ans += abs(v[x]);
    sum += v[x] * -1;
    for(auto a : adj[x])
        dfs(a);
    sum -= v[x] * -1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, a, b;
 
    cin >> n;
    v.resize(n + 1);
    adj.resize(n + 1, vector<int>());
 
    fori(i, 0, n-1) {
        cin >> a >> b;
        adj[a].push_back(b);
    }
 
    fori(i, 1, n+1)
        cin >> v[i];
 
    dfs(1);
    cout << ans << endl;
 
    return 0;
}