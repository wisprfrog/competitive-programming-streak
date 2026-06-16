//URL: https://vjudge.net/problem/USACO-855

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

int puede[4], tiene[4];

void pasar(int orig, int dest) {
    int falta = puede[dest] - tiene[dest];

    tiene[dest] += min(falta, tiene[orig]);
    tiene[orig] -= min(falta, tiene[orig]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    cin>>puede[1]>>tiene[1];
    cin>>puede[2]>>tiene[2];
    cin>>puede[3]>>tiene[3];

    pasar(1, 2);
    pasar(2, 3);
    pasar(3, 1);
    pasar(1, 2);

    for (int i=1; i<=3; i++) cout<<tiene[i]<<'\n';

    return 0;
}