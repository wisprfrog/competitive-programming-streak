//URL: https://codeforces.com/contest/279/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';

ll a[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin>>n>>t;

    for (int i=1; i<=n; i++) cin>>a[i];

    ll acum = 0;
    int cont = 0;
    for (int i=n; i>=1; i--) {
        acum += a[i];

        if (acum <= t) cont++;
        else break;
    }

    cout<<cont<<'\n';

    return 0;
}

/*



 */