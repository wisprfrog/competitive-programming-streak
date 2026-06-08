//URL: https://codeforces.com/problemset/problem/381/A

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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int arr[1001];
    for (int i=1; i<=n; i++) cin>>arr[i];

    int ini = 1, fin = n, sereja = 0, dima = 0;
    bool turno_s = true;
    while (ini <= fin) {
        if (turno_s) {
            if (arr[ini] > arr[fin]) {
                sereja += arr[ini];
                ini++;
            }
            else {
                sereja += arr[fin];
                fin--;
            }
        }
        else {
            if (arr[ini] > arr[fin]) {
                dima += arr[ini];
                ini++;
            }
            else {
                dima += arr[fin];
                fin--;
            }
        }

        turno_s = !turno_s;
    }

    cout<<sereja<<' '<<dima<<'\n';

    return 0;
}

/*



 */