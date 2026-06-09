//URL: https://codeforces.com/problemset/problem/433/B

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

ll orig[MAXN], pref[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cin>>orig[i];

        pref[i] = orig[i] + pref[i-1];
    }

    sort(orig+1, orig+n+1);
    for (int i=1; i<=n; i++) orig[i] += orig[i-1];

    int m;
    cin>>m;
    while (m--) {
        int opc, l, r;
        cin>>opc>>l>>r;

        ll res;
        if (opc == 1) res = pref[r] - pref[l-1];
        else res = orig[r] - orig[l-1];

        cout<<res<<'\n';
    }

    return 0;
}

/*



*/