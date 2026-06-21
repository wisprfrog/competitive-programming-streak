//URL: https://codeforces.com/problemset/problem/492/B

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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    cin>>n>>l;

    double a[1001];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);

    double mayor = max(a[1], l - a[n]);
    for (int i=1; i<n; i++) {
        double difer = (a[i+1] - a[i])/2;

        mayor = max(mayor, difer);
    }

    cout<<fixed<<setprecision(9)<<mayor<<'\n';

    return 0;
}