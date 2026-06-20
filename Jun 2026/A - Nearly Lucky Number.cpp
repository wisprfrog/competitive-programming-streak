//URL: https://codeforces.com/problemset/problem/110/A

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

vector<vector<ll>> mat;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    int cont = 0;
    for(auto x : s) {
        if (x == '4' || x == '7') cont++;
    }

    if ((cont % 4 == 0 || cont % 7 == 0) && cont != 0) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}