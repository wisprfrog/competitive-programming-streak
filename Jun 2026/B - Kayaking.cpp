//URL: https://codeforces.com/contest/863/problem/B

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

int arr[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    n *= 2;

    for (int i=1; i<=n; i++) cin>>arr[i];
    sort(arr+1, arr+n+ 1);

    int menor = INT_MAX;
    for (int uno=1; uno<=n; uno++) {
        for (int dos = uno+1; dos<=n; dos++) {
            int suma = 0;
            for (int l=1; l<=n; l++) {
                if (l != uno && l != dos) {
                    int r = l+1;
                    while ((r == uno || r == dos) && r <= n) r++;

                    suma += arr[r] - arr[l];
                    l = r;
                }
            }
            menor = min(menor, suma);
        }
    }

    cout<<menor<<'\n';

    return 0;
}