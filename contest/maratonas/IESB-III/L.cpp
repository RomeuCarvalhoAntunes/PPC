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
 
    while(true) {
        stack<int> st;
        queue<int> qu;
        priority_queue<int> pq;
 
        int n, c, x;
        bool stp, qup, pqp;
        stp = qup = pqp = true;
 
        cin >> n;
        if(n == -1) break;
        fori(i, 0, n) {
            cin >> c >> x;
            if(c == 1) {
                st.push(x);
                qu.push(x);
                pq.push(x);
            }
            else {
                if(st.top() == x && stp) {
                    st.pop();
                }
                else if(st.top() != x) {
                    stp = false;
                }
                if(qu.front() == x && qup) {
                    qu.pop();
                }
                else if(qu.front() != x) {
                    qup = false;
                }
                if(pq.top() == x && pqp) {
                    pq.pop();
                }
                else if(pq.top() != x) {
                    pqp = false;
                }
            }
        }
        if(stp + pqp + qup > 1) {
            cout << "CHEATED" << endl;
            continue;
        }
        if(stp + pqp + qup == 0) {
            cout << "RASTA" << endl;
            continue;
        }
        if(stp) {
            cout << "PILHA" << endl;
        }
        else if(pqp) {
            cout << "FILA DE PRIORIDADE" << endl;
        }
        else
            cout << "FILA" << endl;
    }
 
 
    return 0;
}