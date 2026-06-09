//URL: https://codeforces.com/problemset/problem/205/A

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

pair<int, int> a[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a+1, a+n+1);

    if (a[1].first == a[2].first) cout<<"Still Rozdil\n";
    else cout<<a[1].second<<'\n';

    return 0;
}

/*



*/