//URL: https://codeforces.com/problemset/problem/432/A

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

int cube[6];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    for (int i=1; i<=n; i++) {
        int num;
        cin>>num;

        cube[num]++;
    }

    int faltar = 5-k, suma = 0;
    for (int i=0; i<=faltar; i++) suma += cube[i];

    cout<<suma/3<<'\n';

    return 0;
}

/*



*/