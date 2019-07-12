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
 
ll n, m;
bool vis[(int)1e6];
int dist[(int)1e6];
queue<int> q;
 
vi adj(int x) {
    vi r;
    r.push_back(x+1);
    r.push_back(x-1);
    r.push_back(x*2);
    if(x % 2 == 0) r.push_back(x/2);
    return r;
}
 
int bfs(int x) {
    memset(vis, 0, sizeof vis);
    memset(dist, 0, sizeof dist);
 
    vis[x] = true;
    dist[x] = 0;
    q.push(x);
 
    while(!q.empty()) {
        int f = q.front(); q.pop();
        for(auto a : adj(f)) {
            if(a > (int)1e5 || a <= 0) continue;
            if(vis[a]) continue;
            vis[a] = true;
            dist[a] = dist[f] + 1;
            q.push(a);
        }
    }
    return dist[m];
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> m;
 
    cout << bfs(n) << endl;
 
    return 0;
}