//URL: https://codeforces.com/problemset/problem/34/B

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

int a[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;

    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);

    int suma = 0;
    for (int i=1; i<=m; i++) {
        if (a[i] >= 0) break;

        suma += abs(a[i]);
    }

    cout<<suma<<'\n';

    return 0;
}

/*



*/