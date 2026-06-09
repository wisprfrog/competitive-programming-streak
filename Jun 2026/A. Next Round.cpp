//URL: https://codeforces.com/contest/158/problem/A

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

    int n, k;
    cin>>n>>k;

    int arr[51];
    for (int i=1; i<=n; i++) cin>>arr[i];

    int cont = 0;
    for (int i=1; i<=n; i++) {
        if (arr[i] >= arr[k] && arr[i] != 0) cont++;
    }

    cout<<cont<<'\n';

    return 0;
}

/*



 */