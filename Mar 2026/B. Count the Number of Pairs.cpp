//URL: https://codeforces.com/problemset/problem/1800/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

map<char, pair<int, int>> ocurr; //letra, minus mayus

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        for (char x : s) {
            if (isupper(x)) ocurr[tolower(x)].second++;
            else ocurr[x].first++;
        }

        int cont = 0;
        for (auto [letra, cantidad] : ocurr) {
            int menor = min(cantidad.first, cantidad.second);
            int sobra = max(cantidad.first, cantidad.second) - menor;

            int opers = sobra/2; //cantidad de operaciones que puede hacer en este caso
            if (opers >= k) {
                cont += k;
                k = 0;
            }
            else {
                cont += opers;
                k -= opers;
            }

            cont += menor;
        }

        cout<<cont<<'\n';
        ocurr.clear();
    }



    return 0;
}

/*

1
2
1 3

 */
