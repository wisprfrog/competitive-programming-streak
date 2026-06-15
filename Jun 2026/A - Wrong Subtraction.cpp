//URL: https://codeforces.com/contest/977/problem/A

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

/*



*/



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n;
    int k;
    cin>>n>>k;

    for (int i=1; i<=k; i++) {
        int tam = n.size();
        if (n[tam-1] == '0') n.pop_back();
        else n[tam-1] -= 1;
    }

    cout<<n<<'\n';

    return 0;
}