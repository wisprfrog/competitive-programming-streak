//URL: https://codeforces.com/contest/230/problem/A

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


pair<int, int> drag[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin>>s>>n;

    for (int i=1; i<=n; i++) {
        cin>>drag[i].first;
        cin>>drag[i].second;
    }
    sort(drag+1, drag+n+1);

    bool puede = true;
    for (int i=1; i<=n && puede; i++) {
        if (s > drag[i].first) s+= drag[i].second;
        else puede = false;
    }

    if (puede) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}