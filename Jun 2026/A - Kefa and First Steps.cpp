//URL: https://codeforces.com/contest/580/problem/A

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

// freopen("speeding.in", "r", stdin);
// freopen("speeding.out", "w", stdout);Z

/*



*/

int a[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++) cin>>a[i];

    int l = 1, mayor = 0;
    for (int r = 2; r <= n+1; r++) { //hasta n+1 para que evalue n tambien
        if (a[r] < a[r-1]) {
            mayor = max(mayor, r-l);
            l = r;
        }
    }

    cout<<mayor<<'\n';

    return 0;
}