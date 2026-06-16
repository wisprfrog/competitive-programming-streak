//URL: https://vjudge.net/problem/USACO-568

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';

/*



*/



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin>>n>>m;

    int limites[101];
    int total = 0;
    while (n--) {
        int dist, lim;
        cin>>dist>>lim;

        for (int i=total+1; i<=total+dist; i++) limites[i] = lim;
        total += dist;
    }

    int recorre = 0, mayor = 0;
    while (m--) {
        int dist, velo;
        cin>>dist>>velo;

        for (int i=recorre+1; i<=recorre+dist; i++) mayor = max(mayor, velo - limites[i]);
        recorre += dist;
    }

    cout<<mayor<<'\n';

    return 0;
}