//URL: https://codeforces.com/contest/490/problem/A

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
// freopen("speeding.out", "w", stdout);Z

/*



*/



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> cube[] = {{}, {}, {}, {}};
    for (int i=1; i<=n; i++) {
        int num;
        cin>>num;

        cube[num].push_back(to_string(i));
    }

    vector<string> ans;
    while (!cube[1].empty() && !cube[2].empty() && !cube[3].empty()) {
        string equi = cube[1].back()+' '+cube[2].back()+' '+cube[3].back();
        ans.push_back(equi);

        cube[1].pop_back();
        cube[2].pop_back();
        cube[3].pop_back();
    }

    cout<<ans.size()<<'\n';
    for (auto x : ans) cout<<x<<'\n';

    return 0;
}