//URL: https://vjudge.net/problem/USACO-891

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

pair<int, int> movs[101];
int escoge[101], n;


int simular(int inicia) {
    bool vasos[] = {false, false, false, false};
    vasos[inicia] = true;

    int cont = 0;
    for (int i=1; i<=n; i++) {
        swap(vasos[movs[i].first], vasos[movs[i].second]);

        if (vasos[escoge[i]]) cont++;
    }

    return cont;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    cin>>n;

    for (int i=1; i<=n; i++) {
        cin>>movs[i].first;
        cin>>movs[i].second;
        cin>>escoge[i];
    }

    int uno = simular(1);
    int dos = simular(2);
    int tres = simular(3);

    cout<<max(uno, max(dos, tres));

    return 0;
}