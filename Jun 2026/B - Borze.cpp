//URL: https://codeforces.com/problemset/problem/32/B

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

    // freopen("speeding.in", "r", stdin);
    // freopen("speeding.out", "w", stdout);

    string s;
    cin>>s;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == '.') {
            cout<<'0';
            continue;
        }

        if (s.substr(i, 2) == "-.") cout<<'1';
        else cout<<'2';
        i++;
    }

    return 0;
}