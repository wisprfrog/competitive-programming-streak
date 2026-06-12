//URL: https://codeforces.com/contest/41/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin>>a>>b;

    reverse(all(a));

    if (a == b) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

/*



 */