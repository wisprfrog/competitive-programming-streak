//URL: https://codeforces.com/problemset/problem/443/A

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
// freopen("speeding.out", "w", stdout);

/*



*/



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    set<char> st;
    for (auto x : s) if (isalpha(x)) st.insert(x);

    cout<<st.size()<<'\n';

    return 0;
}