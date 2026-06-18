//URL: https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300001;
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

int a[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);

    int q;
    cin>>q;

    while (q--) {
        int m;
        cin>>m;

        int ini=1, fin=n, res;
        while (ini <= fin) {
            int mit = (ini+fin)/2;

            if (a[mit] <= m) ini = mit+1;
            else fin = mit-1;

            res = fin;
        }

        cout<<res<<'\n';
    }

    return 0;
}