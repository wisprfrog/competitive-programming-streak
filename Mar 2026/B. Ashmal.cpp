//URL: https://codeforces.com/problemset/problem/2180/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

string arr[1005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        string res = arr[1];
        for (int i=2; i<=n; i++) {
            string aux_ini = arr[i] + res;
            string aux_fin = res + arr[i];

            res = min(aux_ini, aux_fin);
        }

        cout<<res<<'\n';
    }



    return 0;
}

/*



 */
