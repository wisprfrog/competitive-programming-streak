//URL: https://codeforces.com/contest/271/problem/A

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

bool diferentes(int num) {
    map<char, int> cube;
    string s = to_string(num);
    for (auto x : s) cube[x]++;

    for (auto [car, frec] : cube) if (frec > 1) return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // freopen("speeding.in", "r", stdin);
    // freopen("speeding.out", "w", stdout);

    int n;
    cin>>n;

    do {
        n++;
    }while(!diferentes(n));

    cout<<n<<'\n';

    return 0;
}