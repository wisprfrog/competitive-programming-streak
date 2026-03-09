//URL: https://codeforces.com/problemset/problem/2164/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

vector<int> pares, impares;
int arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) {
            cin>>arr[i];

            if (arr[i] & 1) impares.push_back(arr[i]);
            else pares.push_back(arr[i]);
        }

        int x = -1, y = -1;
        if (!impares.empty() && impares[0] == 1) {
            x = 1;

            if (impares.size() > 1) y = impares[1];
            else y = pares[0];
        }
        else if (pares.size() > 1){
            x = pares[0];
            y = pares[1];
        }
        else { //no hay 1's y hay menos de 2 numeros pares
            if (!pares.empty()) {
                impares.push_back(pares[0]); //puede que sea parte de la respuesta, ejemplo: caso 3 6
                sort(impares.begin(), impares.end());
            }

            for (int i=1; i<impares.size() && x == -1; i++) { //buscar par tal que arr[j] < arr[i] * 2, como son impares su dif es par
                for (int j=i+1; j<=impares.size() && x == -1; j++) {
                    int modu = arr[j] % arr[i];
                    if (modu % 2 == 0) {
                        x = arr[i];
                        y = arr[j];
                    }
                }
            }
        }

        if (x != -1) cout<<x<<' '<<y<<'\n';
        else cout<<"-1\n";

        pares.clear();
        impares.clear();
    }



    return 0;
}

/*

1
2
1 3

 */
