//URL: https://codeforces.com/contest/2236/problem/B

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
    IMPORTANTE: Si la cantidad de 1s es impar, no hay forma de hacer que ese 1 sobrante se vuelva en 0.

    La operación invierte los valores de s[i] y s[i+k].

    Para resolver este problema hay que considerar este caso
    10001, donde k=2

    Dado el valor de k, no hay forma de invertir DIRECTAMENTE los valores s[0] y s[4],
    pero podemos acercar el 1 de s[0] hacia s[4], aplicando la operación en s[0]
    00101

    Ahora sí, podemos invertir los valores de s[2] y s[4] dando
    00000

    Notemos que 0, 2 y 4 pertenecen al mismo grupo de i+k, es decir, se puede llegar desde 0 hacia cualquiera de estas
    Pero, desde el 0 no podemos llegar a 1 (debido al valor de k)

    Entonces, debemos verificar cada uno de estos grupos i <= k, y si la cantidad de unos es par en cada grupo,
    se imprime YES,
    en caso contrario, NO.
*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        bool puede = true;
        for (int grupo=0; grupo<k && puede; grupo++) {
            int unos = 0;
            for (int i=grupo; i<n; i+=k) unos += s[i]-'0';

            if (unos & 1) puede = false;
        }

        cout<<(puede ? "YES\n" : "NO\n");
    }


    return 0;
}

