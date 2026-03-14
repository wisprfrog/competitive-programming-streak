//URL: https://codeforces.com/problemset/problem/1473/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string a, b;
        cin>>a>>b;

        if (b.size() > a.size()) swap(a, b);

        int tam_a = a.size();
        int tam_b = b.size();

        string res = "-1";
        for (int multi = 1; multi<=20; multi++) {
            if ((a.size()*multi) % b.size() == 0) {
                string aux_a;
                for (int i=1; i<=multi; i++) aux_a += a;

                bool puede = true;
                for (int j=0; j<tam_a * multi && puede; j+=b.size()) {
                    if (aux_a.substr(j, b.size()) != b) puede = false;
                }

                if (puede) {
                    res = aux_a;
                    break;
                }
            }
        }

        cout<<res<<'\n';
    }

    return 0;
}

/*



 */
