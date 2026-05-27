//URL: https://codeforces.com/problemset/problem/1138/A

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

int arr[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) cin>>arr[i];

    int uno = 0, dos = 0, mayor = 0;

    for (int i=1; i<=n; i++) {
        if (arr[i] == 1) {
            if (uno > 0 && arr[i-1] == 2) { //nuevo comienzo de unos
                mayor = max(min(uno, dos), mayor);
                uno = 0;
            }

            uno++;
        }

        if (arr[i] == 2) {
            if (dos > 0 && arr[i-1] == 1) { //nuevo comienzo de unos
                mayor = max(min(uno, dos), mayor);
                dos = 0;
            }

            dos++;
        }
    }

    mayor = max(min(uno, dos), mayor);

    cout<<mayor*2<<'\n';

    return 0;
}

/*



 */