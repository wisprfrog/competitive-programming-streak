//URL: https://codeforces.com/contest/1808/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';

// freopen("speeding.in", "r", stdin);
// freopen("speeding.out", "w", stdout);Z

/*

El hecho de que sea la sumatoria de valores absolutos lo hace un poco curioso.
Si tuviéramos |3-4|+|3-1| = 1+2 = 3, no hay forma de factorizar esta operación,
es decir, en |(3*2)-4-1| = 6-5 = 1, da un resultado diferente.

Ene el ejemplo anterior, solo uno de los valores es negativo (3-4), pero,
al ser valor absoluto, cambia el resultado completamente.

Como utilizar valor absoluto nos generea conflictos, una forma de deshacernos
de él es ordenando los números de forma descendente, así al hacer la
resta a_i - a_(i+1), el resultado siempre será positivo.

La matriz se transpone para poder ordenar las columnas (que pasan a ser filas).
Ordenar las columnas no supone un problema porque la operación que se realizará
sobre ellas es la suma. Es lo mismo sumar a+b que sumar b+a.

El prefix nos da las suma de los valores que tiene por delante el valor a_i.

Así, por cada valor de cada columna, hacemos abs((a_i * delante) - pref[i+1]).
Delante indica cuántos valores tiene delante a_i, esto para hacer la resta que
describe el problema.

Esta resta puede ser negativa, entonces le sacamos valor absoluto.

*/

vector<vector<ll>> mat;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int fil, col;
        cin>>fil>>col;

        //Una matriz de 3e5*3e5 es mucha memoria
        //En el peor de los casos la matriz puede ser de 1*3e5 o 3e5*1
        //Dados los límites n*m <= 3e5
        mat.resize(col);
        for (int i=0; i<col; i++) mat[i].resize(fil);

        for (int i=0; i<fil; i++) {
            for (int j=0; j<col; j++) {
                cin>>mat[j][i];
                //Se transpone la matriz para poder ordenar las columnas
                //Que ahora son las filas
            }
        }

        for (int i=0; i<col; i++) {
            sort(all(mat[i]), greater<ll>());

            //Se hace prefix de cada fila, de hacia atrás hacia adelante
            for (int j=fil-2; j>=0; j--) mat[i][j] += mat[i][j+1];
        }

        ll suma = 0;
        for (int i=0; i<col; i++) {
            for (int j=0; j+1<fil; j++) {
                ll actual = mat[i][j] - mat[i][j+1];
                ll delante = fil-j-1; //Cantidad de veces que se restará el actual

                suma += abs(mat[i][j+1] - actual*delante);
            }
        }

        cout<<suma<<'\n';
    }

    return 0;
}