//URL: https://codeforces.com/contest/1352/problem/A

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

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        vector<string> res;
        for (int i=0; i<s.size(); i++) {
            if (s[i] != '0') {
                string aux;
                aux += s[i];
                for (int j=i+1; j<s.size(); j++) aux += '0';

                res.push_back(aux);
            }
        }

        cout<<res.size()<<'\n';
        for (auto x : res) cout<<x<<' ';
        cout<<'\n';
    }

    return 0;
}