// URL: https://codeforces.com/contest/1559/problem/D1

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

vector<int> padres_m1(1005), tam_m1(1005);
vector<int> padres_m2(1005), tam_m2(1005);
int n;

void init() {
    for (int i=1; i<=n; i++) {
        padres_m1[i] = i;
        padres_m2[i] = i;
        tam_m1[i] = 1;
        tam_m2[i] = 1;
    }
}

int buscar(int u, vector<int> &padres) {
    if (u == padres[u]) return u;

    return padres[u] = buscar(padres[u], padres);
}

void unir(int u, int v, vector<int> &padres, vector<int> &tam) {
    u = buscar(u, padres);
    v = buscar(v, padres);

    if (u != v) {
        if (tam[u] < tam[v]) swap(u, v);

        padres[v] = u;
        tam[u] += tam[v];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m1, m2;
    cin>>n>>m1>>m2;

    init();

    for(int i=1; i<=m1; i++) {
        int u, v;
        cin>>u>>v;

        unir(u, v, padres_m1, tam_m1);
    }

    for(int i=1; i<=m2; i++) {
        int u, v;
        cin>>u>>v;

        unir(u, v, padres_m2, tam_m2);
    }

    vector<pair<int, int>> pares;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            int raiz_i1 = buscar(i, padres_m1);
            int raiz_j1 = buscar(j, padres_m1);

            int raiz_i2 = buscar(i, padres_m2);
            int raiz_j2 = buscar(j, padres_m2);

            if (raiz_i1 != raiz_j1 && raiz_i2 != raiz_j2) {
                pares.push_back({i, j});

                unir(i, j, padres_m1, tam_m1);
                unir(i, j, padres_m2, tam_m2);
            }
        }
    }

    cout<<pares.size()<<'\n';
    for (auto x : pares) cout<<x.first<<' '<<x.second<<'\n';


    return 0;
}

/*



 */

