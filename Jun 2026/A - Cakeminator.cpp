//URL: https://codeforces.com/problemset/problem/330/A

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

int r, c;

char mat[11][11];

void descontar_col(int _j) { for (int i=1; i<=r; i++) mat[i][_j] = 'x'; }

void descontar_fil(int _i) { for (int i=1; i<=c; i++) mat[_i][i] = 'x'; }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //me paso de pen
    cin>>r>>c;

    for (int i=1; i<=r; i++) {
        for (int j=1; j<=c; j++) cin>>mat[i][j];
    }

    for (int i=1; i<=r; i++) {
        bool s = false;
        for (int j=1; j<=c && !s; j++) if (mat[i][j] == 'S') s = true;

        if (!s) descontar_fil(i);
    }

    for (int i=1; i<=c; i++) {
        bool s = false;
        for (int j=1; j<=r && !s; j++) if (mat[j][i] == 'S') s = true;

        if (!s) descontar_col(i);
    }

    int cont = 0;
    for (int i=1; i<=r; i++) {
        for (int j=1; j<=c; j++) if (mat[i][j] == 'x') cont++;
    }

    cout<<cont<<'\n';

    return 0;
}

/*

3 4
S...
.S.S
..S.


 */