//URL: https://codeforces.com/problemset/problem/2192/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
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

        int cont = 1;
        for (int i=1; i<n; i++) {
            if (s[i] != s[i-1]) cont++;
        }

        //significa que hay un sub de tamanio >= 2 o que ha mas de un sub
        if (cont < n && cont > 1) {
            //significa que el sub esta en otro lado y puede ser acomodado
            if (s[n-1] != s[0]) cont++;
        }

        cout<<cont<<'\n';
    }

    return 0;
}

/*



 */