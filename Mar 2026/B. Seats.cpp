//URL: https://codeforces.com/problemset/problem/2188/B

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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cont = 0;

        if (n == 1 || n == 2) cont = 1;
        else {
            int ini = 0, fin = n-1;
            if (s[0] == '0') {
                s[1] = '1'; //lo colocamos a pesar de ser jugada invalida si s[2] == 1, equivale a ponerlo en s[0]
                ini = 1;
            }

            if (s[n-1] == '0') {
                s[n-2] = '1';
                fin = n-2;
            }

            int lrango = -1, rrango;
            for (int i=ini; i<=fin; i++) {
                if (s[i] == '1') {
                    cont++;
                    if (lrango == -1) lrango = i;
                    else {
                        rrango = i;
                        cont += (rrango - lrango - 1)/3;
                        lrango = rrango;
                    }
                }
            }

        }

        cout<<cont<<'\n';
    }



    return 0;
}

/*



 */
