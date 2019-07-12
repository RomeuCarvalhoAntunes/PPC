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
 
#define MAX (int)1e4+1
 
using namespace std;
 
bool prime[MAX];
 
void sieve() {  
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<MAX; p++) { 
        if (prime[p] == true) { 
            for (int i=p*p; i<MAX; i += p) 
                prime[i] = false; 
        } 
    }
	prime[0] = prime[1] = false;
} 
 
int lp(int x) {
    while(x >= 0 && !prime[x]) x--;
    return x;
}
 
vi ans;
int sum = 0;
bool s = false;
 
void solve(int n) {
    if(n == 0) {
        for(auto e : ans) cout << e << " ";
        cout << endl;
        s = true;
        return;
    }
 
    if(n == 1) return;
 
    int l;
    int aux = n;
    while(!s) {
        l = lp(aux);
        ans.push_back(l);
        sum += l;
        solve(n - l);
        sum -= l;
        ans.pop_back();
        aux = l - 1;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    sieve();
 
    int q, n;
 
    cin >> q;
 
    while(q--) {
        cin >> n;
        if(n < 2) {
            cout << "Impossivel!" << endl;
            continue;
        }
        ans.clear();
        sum = 0;
        s = false;
        solve(n);
    }
 
    return 0;
}