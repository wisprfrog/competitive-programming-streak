//URL: https://codeforces.com/contest/2090/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

string mat[55];

bool cero_arriba(int x, int y) {
    for (int i=x-1; i>=1; i--) {
        if (mat[i][y] == '0') return true;
    }

    return false;
}

bool cero_izq(int x, int y) {
    for (int j=y-1; j>=1; j--) {
        if (mat[x][j] == '0') return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, m;
        cin>>n>>m;

        for (int i=1; i<=n; i++) {
            string aux;
            cin>>aux;

            mat[i] = "_" + aux;
        }

        bool puede = true;
        for (int i=n; i>=2 && puede; i--) {
            for (int j=m; j>=2 && puede; j--) {
                if (mat[i][j] == '1') {
                    bool arr = cero_arriba(i, j);
                    bool izq = cero_izq(i, j);
                    puede = !(arr && izq);
                }
            }
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}

/*

1
3 4
0110
0110
0110

 */