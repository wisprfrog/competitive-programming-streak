//URL: https://codeforces.com/problemset/problem/339/A

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

    string s;
    cin>>s;

    int uno = 0, dos = 0, tres = 0;
    for (auto x : s) {
        switch (x) {
            case '1' : uno++; break;
            case '2' : dos++; break;
            case '3' : tres++; break;
            default: break;
        }
    }

    string res;
    for (int i=1; i<=uno; i++) res += "1+";
    for (int i=1; i<=dos; i++) res += "2+";
    for (int i=1; i<=tres; i++) res += "3+";

    res.pop_back();

    cout<<res<<'\n';

    return 0;
}