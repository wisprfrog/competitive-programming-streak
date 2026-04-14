//URL: https://codeforces.com/problemset/problem/2182/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int white, black;
        cin>>white>>black;

        int suma_white_black = 0; //si empezamos por blanco
        int acum_white = 0, acum_black = 0;
        for (int i=0; i<=30; i++) {
            if (i % 2 == 0) {
                acum_white += 1<<i;

                if (acum_white > white) break;
                suma_white_black++;
            }
            else {
                acum_black += 1<<i;

                if (acum_black > black) break;
                suma_white_black++;
            }
        }

        int suma_black_white = 0; //si empezamos por negro
        acum_white = 0, acum_black = 0;
        for (int i=0; i<=30; i++) {
            if (i & 1) {
                acum_white += 1<<i;

                if (acum_white > white) break;
                suma_black_white++;
            }
            else {
                acum_black += 1<<i;

                if (acum_black > black) break;
                suma_black_white++;
            }
        }

        cout<<max(suma_white_black, suma_black_white)<<'\n';
    }

    return 0;
}

/*



 */