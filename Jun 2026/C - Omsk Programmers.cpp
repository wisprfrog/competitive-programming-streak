//URL: https://codeforces.com/contest/2236/problem/C

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
    El 6to caso de prueba es muy bueno.
    Lo más óptimo es dividir 7/2 = 3 (una operación)
    y sumar uno 3+1 = 4 (dos operaciónes)

    Este caso obliga a complicar la solución, dado que puede haber
    casos donde solo debas sumar, solo dividir, sumar muchas veces para luego dividir,
    dividir muchas veces para luego sumar, etc.

    Pero es importante notar que, es lo mismo sumar primero y luego dividir
    que hacerlo al revés.

    En el ejemplo, dividimos y luego sumamos. Si lo hacemos al revés:
    7+1 = 8 (una operación)
    8/2 = 4 (dos operaciones)

    Para esta solución, se divide primero y luego se suma.

    Para controlar esos casos donde divides mucho o poco y luego sumas
    divides el más grande y sacas la diferencia absoluta respecto al otro número
    (absoluta porque al dividir puede resultar más grande o más pequeño).

    La suma por sí sola ya da el resultado de cuántas operaciones realizó, pero,
    debes llevar un contador de cuántas veces has dividido para el resultado correcto.
*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;

    while (t--) {
        int a, b, x;
        cin>>a>>b>>x;

        if (a==b) {
            cout<<"0\n";
            continue;
        }

        int menor = abs(a-b), divs = 0;
        while (a > 0 || b > 0) {
            if (b < a) swap(a, b); //Para que b sea el mayor siempre

            b/=x;
            divs++;
            menor = min(menor, abs(a-b)+divs);
        }

        cout<<menor<<'\n';
    }


    return 0;
}

