//URL: https://codeforces.com/contest/2218/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int mayor = INT_MIN, suma = 0;
        for (int i=1; i<=7; i++) {
            int num;
            cin>>num;

            mayor = max(mayor, num);
            suma += num;
        }

        suma -= mayor;
        suma *= -1;
        suma += mayor;
        cout<<suma<<'\n';
    }

    return 0;
}

/*



 */