//URL: https://codeforces.com/problemset/problem/1490/D
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int arr[105], profu[105], n;

void buscando_max(int ini, int fin, int nivel) {
    if (ini > fin) return;

    int mayor = -1, pos = -1;
    for (int i=ini; i<=fin; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
            pos = i;
        }
    }

    profu[pos] = nivel;
    buscando_max(ini, pos-1, nivel+1);
    buscando_max(pos+1, fin, nivel+1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        buscando_max(1, n, 0);

        for (int i=1; i<=n; i++) {
            cout<<profu[i]<<' ';
            profu[i] = 0;
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */
 