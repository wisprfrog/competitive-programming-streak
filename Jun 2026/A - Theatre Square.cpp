//URL: https://codeforces.com/contest/1/problem/A

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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, a;
    cin>>n>>m>>a;

    ll base = n/a + (n%a != 0 ? 1 : 0);
    ll altura = m/a + (m%a != 0 ? 1 : 0);

    ll res = base*altura;

    cout<<res<<'\n';

    return 0;
}

/*



 */