//URL: https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 150001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    int a[MAXN];
    for (int i=1; i<=n; i++) cin>>a[i];

    int ini=1, fin = k, suma = 0;
    for (int i=1; i<=fin; i++) suma += a[i];

    int menor = suma, index = 1;
    while (fin < n) {
        ini++;
        fin++;
        suma -= a[ini-1];
        suma += a[fin];

        if (suma < menor) {
            menor= suma;
            index = ini;
        }
    }

    cout<<index<<'\n';

    return 0;
}

/*



*/