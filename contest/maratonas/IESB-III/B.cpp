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
 
    ll cx, cy, cz;
    ll px, py, pz;
 
    cin >> cx >> cy >> cz;
    cin >> px >> py >> pz;
 
    ll d = max(abs(px - cx), abs(py - cy));
    d = max(d, abs(pz - cz));
 
    bool pos[6];
    fori(i, 0, 6) pos[i] = false;
 
    if(abs(px - cx) == d) pos[0] = pos[1] = true;
    else if(abs(py - cy) == d) pos[2] = pos[3] = true;
    else if(abs(pz - cz) == d) pos[4] = pos[5] = true;
 
    if(px > cx) pos[1] = false;
    else if(px < cx) pos[0] = false;
    else pos[1] = pos[0] = false;
 
    if(py > cy) pos[3] = false;
    else if(py < cy) pos[2] = false;
    else pos[2] = pos[3] = false;
 
    if(pz > cz) pos[5] = false;
    else if(pz < cz) pos[4] = false;
    else pos[5] = pos[4] = false;
 
    fori(i, 0, 6) {
        if(pos[i]) cout << char('A' + i) << endl;
    }
 
    return 0;
}