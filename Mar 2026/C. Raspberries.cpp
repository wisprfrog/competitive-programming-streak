//URL: https://codeforces.com/problemset/problem/1883/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        int pares = 0;
        int res = -1;
        for (int i=1; i<=n; i++) {
            cin>>arr[i];

            if (arr[i] % k == 0) res = 0;
            if (arr[i] % 2 == 0) pares++;
        }

        if (res == -1) {
            if (k != 4) res = INT_MAX;
            else {
                if (pares >= 2) res = 0;
                else if (pares == 1) res = 1; //+1 a un impar
                else if (pares == 0) res = 2; //+1 a dos impares

                //para que la multiplicacion sea divisible entre 4
                //y no hay un numero divisible entre cuatro
                //debe haber por lo menos 2 pares
                //si por ejemplo tuvieras 2 y 6, tienes el prodcuto 2*2*3 = 4*3
                //el cual es divisible entre 2

                //aun asi iteramos sobre el arreglo porque
                //en el caso 3 5 3, no hay pares y la respuesta
                //en teoria es 2, pero en realidad es 1 porque
                //le puedes sumar 1 al 3 y listo
            }

            for (int i=1; i<=n; i++) {
                int modulo = arr[i] % k;
                int k_anter = arr[i] - modulo;
                int k_sig = k_anter + k;

                int difer = k_sig - arr[i];
                res = min(res, difer);
            }
        }

        cout<<res<<'\n';
    }


    return 0;
}

/*



 */