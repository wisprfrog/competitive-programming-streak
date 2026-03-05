//URL: https://codeforces.com/problemset/problem/2178/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        int cont = 0;
        if (s[0] == 'u') cont++;
        if (s[s.size()-1] == 'u') cont++;

        int u_seguidas = 0;
        for (int i=1; i<s.size()-1; i++) {
            if (s[i] == 'u') u_seguidas++;

            if (s[i] == 's' && u_seguidas == 2) {
                cont++;
                u_seguidas = 0;
            }

            if (u_seguidas == 3) {
                cont++;
                u_seguidas = 1;
            }

            if (s[i] == 's') u_seguidas = 0;
        }

        if (u_seguidas == 2) cont++;

        cout<<cont<<'\n';
    }



    return 0;
}

/*



 */
