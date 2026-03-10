//URL: https://codeforces.com/problemset/problem/1796/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

string solve(string a, string b) {
    string res = "-";
    for (int i=0; i<a.size() && res == "-"; i++) {
        string aux;
        int cont_aster = 0;
        int cont_letra = 0;
        if (i > 0) {
            aux += '*';
            cont_aster++;
        }

        int ini = i;
        int fin;
        for (int j=0; j<b.size() && ini < a.size(); j++) {
            if (b[j] != a[ini] && aux[aux.size()-1] != '*') {
                aux += '*';
                cont_aster++;
            }
            if (b[j] == a[ini]) {
                aux += b[j];
                cont_letra++;
            }

            ini++;
            fin = j+1; //operacion que no completo
        }

        if ((ini < a.size() || fin < b.size()) && aux[aux.size()-1] != '*') {
            aux += '*';
            cont_aster++;
        }

        if (cont_aster <= cont_letra) res = aux;
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string a, b;
        cin>>a>>b;

        string res = solve(a, b);
        if (res == "-") res = solve(b, a);


        if (res == "-") cout<<"NO\n";
        else cout<<"YES\n"<<res<<'\n';
    }

    return 0;
}

/*



 */
