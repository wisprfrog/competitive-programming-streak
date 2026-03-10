//URL: https://codeforces.com/problemset/problem/1800/D

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<char> pref;
        queue<char> sufi;

        int fin_pref = -1, ini_sufi = 2;
        for (int i=2; i<n; i++) sufi.push(s[i]);

        int cont = 1;
        while (ini_sufi < n){
            fin_pref++;
            pref.push(s[fin_pref]);

            if (pref.top() != sufi.front()) cont++;

            sufi.pop();
            ini_sufi++;
        }

        cout<<cont<<'\n';
    }

    return 0;
}

/*



 */
