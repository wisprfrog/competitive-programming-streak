// URL: https://codeforces.com/contest/1741/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 262149;
const int MOD = 998244353;

pair<int, int> ST[MAXN*4];
int arr[MAXN];

bool puede = true;

void update(int nodo, int ini, int fin, int v, int val) {
    if (ini == fin) {
        ST[nodo] = {val, val};
        return;
    }

    int mit = (ini+fin)/2;

    if (v <= mit) update(nodo*2, ini, mit, v, val);
    else update(nodo*2+1, mit+1, fin, v, val);
}

ll solve(int nodo, int ini, int fin) {
    if (ini == fin) return 0;

    int mit = (ini + fin)/2;

    ll izq = solve(nodo*2, ini, mit);
    ll der = solve(nodo*2+1, mit+1, fin);

    ll suma = izq + der;

    int difer_externa = ST[nodo*2+1].second - ST[nodo*2].first;

    if (difer_externa == -1) { //estan invertidos, 4 3 por ejemplo
        ST[nodo] = {ST[nodo*2+1].first, ST[nodo*2].second};
        return suma + 1;
    }

    int difer_interna = ST[nodo*2+1].first - ST[nodo*2].second;

    if (difer_interna == 1) { //estan ordenado
        ST[nodo] = {ST[nodo*2].first, ST[nodo*2+1].second};
        return suma;
    }

    //no puede porque los numeros no estan en la posicion correcta
    puede = false;
    return suma;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);



    int t;
    cin>>t;
    while (t--) {
        int m;
        cin>>m;

        for (int i=1; i<=m; i++) {
            cin>>arr[i];
            update(1, 1, m, i, arr[i]);
        }

        puede = true;
        ll res = solve(1, 1, m);

        if (m == 1) res = 0;

        if (puede || m == 1) cout<<res<<'\n';
        else cout<<"-1\n";
    }

    return 0;
}

/*



 */