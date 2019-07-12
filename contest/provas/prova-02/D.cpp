// TODO FIX

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
 
int t;
long double m;
vector<long double> v;
 
long double vv(long double ini) {
    long double in = ini;
    for(auto jj : v) {
        auto jjj = ((jj / 100));
        auto inc = in * jjj;
        in = in + inc;
        in += ini;
    }
    return in;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> m >> t;
    v.resize(t);
    fori(i, 0, t) {
        cin >> v[i];
    }
 
 
    long double e = 100000;
    long double s = 0;
 
    long double an, mid;
    long double reached = 10e18;
    long double ba;
    if(vv(100000.0) < m) {
        cout << "impossivel" << endl;
        return 0;
    }
    long double tested = -1.0;
    while(s <= e) {
        mid = ((e - s) / 2) + s;
        mid *= 100;
        auto y = (int)mid;
        mid = (long double)y;
        mid /= 100;
        if(tested != -1 && tested == mid) break;
        an = vv(mid);
        if(m - an <= 0 && abs(m - an) < reached) {
            reached = abs(m - an);
            ba = mid;
        }
        if(an > m) {
            e = mid;
        }
        else if(an < m) {
            s = mid;
        }
        else {
            break;
        }
        tested = mid;
    }
 
    auto sans = to_string(ba);
    cout << setprecision(2) << fixed << "R$ ";
    int cnter = 0;
    fori(i, 0, (int)sans.size()) {
        if(sans[i] == '.') {
            sans[i] = ',';
            break;
        }
        cnter++;
    }
    auto cntt = 0;
    fori(i, 0, cnter) {
        cout << sans[i];
        if(i < cnter-1 && (cnter - i - 1) % 3 == 0) cout << '.';
        cntt++;
    }
    fori(i, cntt, cntt + 3) cout << sans[i];    
    cout << endl;
 
    return 0;
}