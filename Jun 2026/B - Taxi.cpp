//URL: https://codeforces.com/problemset/problem/158/B

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

int cube[4];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int cont = 0;
    for (int i=1; i<=n; i++) {
        int num;
        cin>>num;

        if (num == 4) cont++;
        else cube[num]++;
    }


    { //3 con 1
        int juntar = min(cube[1], cube[3]);
        cont += juntar;

        cube[1] -= juntar;
        cube[3] -= juntar;
    }
    { //3 solo
        cont += cube[3];
    }
    { //2 con 2
        cont += cube[2]/2;
        cube[2] %= 2;
    }
    { //2 con 1
        if (cube[2] > 0) {
            cont++; //dada la linea 48, solo puede haber un 2

            if (cube[1] > 2) cube[1] -= 2;
            else cube[1] = 0;
        }
    }
    { //1 solo
        cont += cube[1]/4 + (cube[1]%4 != 0 ? 1 : 0);
    }

    cout << cont << '\n';

    return 0;
}

/*

10
2 3 2 1 3 1 3 2 1 1

*/