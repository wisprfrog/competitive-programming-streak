//URL: https://codeforces.com/problemset/problem/160/A

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

int a[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int total = 0;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        total += a[i];
    }
    sort(a+1, a+n+1, greater<int>());

    int suma = 0, cont = 0;
    for (int i=1; i<=n; i++) {
        suma += a[i];
        total -= a[i];
        cont++;
        if (suma > total) break;
    }

    cout<<cont<<'\n';

    return 0;
}

/*



*/