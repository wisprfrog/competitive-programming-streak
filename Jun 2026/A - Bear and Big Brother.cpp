//URL: https://codeforces.com/problemset/problem/791/A

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

    ll a, b;
    cin>>a>>b;

    int cont = 0;
    while (a <= b) {
        cont++;
        a *= 3;
        b *= 2;
    }

    cout<<cont<<'\n';


    return 0;
}

/*



 */