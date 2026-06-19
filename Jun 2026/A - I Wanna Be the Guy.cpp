//URL: https://codeforces.com/problemset/problem/469/A

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

    int p;
    cin>>p;

    set<int> s;
    for (int i=1; i<=p; i++) {
        int num;
        cin>>num;

        s.insert(num);
    }

    int q;
    cin>>q;

    for (int i=1; i<=q; i++) {
        int num;
        cin>>num;

        s.insert(num);
    }

    if (s.size() == n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

    return 0;
}