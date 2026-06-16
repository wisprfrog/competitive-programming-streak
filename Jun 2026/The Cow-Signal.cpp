//URL: https://vjudge.net/problem/USACO-665

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

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin>>m>>n>>k;

    while (m--) {
        string s;
        cin>>s;

        string nueva;
        for (auto x : s) {
            for (int i=1; i<=k; i++) nueva += x;
        }

        for (int i=1; i<=k; i++) cout<<nueva<<'\n';
    }


    return 0;
}