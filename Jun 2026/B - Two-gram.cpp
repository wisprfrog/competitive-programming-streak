//URL: https://codeforces.com/problemset/problem/977/B

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

    int n;
    cin>>n;

    string s;
    cin>>s;

    map<string, int> cube;
    for (int i=0; i+1<n; i++) cube[s.substr(i, 2)]++;

    string res;
    int frec = 0;
    for (auto [pal, f] : cube) {
        if (f > frec) {
            res = pal;
            frec = f;
        }
    }

    cout<<res<<'\n';

    return 0;
}