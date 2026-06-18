//URL: https://codeforces.com/contest/474/problem/B

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

pair<int, int> a[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) cin>>a[i].second;

    a[1].first = 1;
    for (int i=1; i<=n; i++) {
        a[i].second = a[i].first + a[i].second - 1;
        a[i+1].first = a[i].second + 1;
    }

    int m;
    cin>>m;

    while (m--) {
        int q;
        cin>>q;

        int ini=1, fin=n, res;
        while (ini <= fin) {
            int mit = (ini+fin)/2;

            if (in_range(q, a[mit].first, a[mit].second)) {
                res = mit;
                break;
            }

            if (q > a[mit].second) ini = mit+1;
            else fin = mit-1;
        }

        cout<<res<<'\n';
    }

    return 0;
}