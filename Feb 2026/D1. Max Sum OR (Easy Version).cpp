// URL: https://codeforces.com/contest/2146/problem/D1
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

vector<int> potes, guardar(MAXN, -1);

void calcular() {
    int pote = 1;
    while (pote <= MAXN) {
        potes.push_back(pote);
        pote<<=1;
    }
    potes.push_back(pote);
}

int buscar(int x) {
    for (int i=0; i<=potes.size(); i++) {
        if (potes[i] > x) return potes[i];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    calcular();

    int t;
    cin>>t;
    while (t--) {
        int l, r;
        cin>>l>>r;

        ll tam = r;
        ll suma = tam*(tam+1);
        for (int i=r; i>=0; i--) {
            if (guardar[i] == -1) {
                int pot_k = buscar(i);
                int complemento = pot_k - 1 - i;

                guardar[i] = complemento;
                guardar[complemento] = i;
            }
        }

        cout<<suma<<'\n';
        for (int i=0; i<=r; i++) {
            cout<<guardar[i]<<' ';
            guardar[i] = -1;
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */

