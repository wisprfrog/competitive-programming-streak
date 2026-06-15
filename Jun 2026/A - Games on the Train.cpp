//URL: https://codeforces.com/contest/2236/problem/A

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

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int mayor = INT_MIN, menor = INT_MAX;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            menor = min(menor, num);
            mayor = max(mayor, num);
        }

        cout<<mayor+1-menor<<'\n';
    }

    return 0;
}

/*



 */