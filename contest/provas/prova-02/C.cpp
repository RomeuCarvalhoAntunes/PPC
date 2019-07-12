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
 
    string s;
    cin >> s;
    vector<char> v;
    set<vector<char>> st;
    for(auto c : s) {
        if(c == '/') continue;
        v.push_back(c);
    }
 
    sort(v.begin(), v.end());
 
    do {
        st.insert(v);
    } while(next_permutation(v.begin(), v.end()));
 
    cout << st.size() << endl;
 
    return 0;
}