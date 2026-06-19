//URL: https://codeforces.com/contest/43/problem/A

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

    int n;
    cin>>n;

    map<string, int> cube;
    while (n--) {
        string s;
        cin>>s;

        cube[s]++;
    }

    string gana;
    int cuant = 0;
    for (auto [equi, gol] : cube) {
        if (gol > cuant) {
            cuant = gol;
            gana = equi;
        }
    }

    cout<<gana<<'\n';

    return 0;
}