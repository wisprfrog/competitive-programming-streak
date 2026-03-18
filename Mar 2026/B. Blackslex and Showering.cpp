//URL: https://codeforces.com/problemset/problem/2179/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

int arr[MAXN], pref[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        for (int i=2; i<=n; i++) pref[i] = pref[i-1] + abs(arr[i] - arr[i-1]);

        int menor = abs(pref[n]-pref[2]); //quitando primer par
        menor = min(menor, pref[n-1]); //quitando ultimo par
        for (int i=2; i<n; i++) {
            int izq = pref[i-1];
            int der = pref[n] - pref[i+1];
            int elim_i = abs(arr[i-1] - arr[i+1]);

            int suma = izq + der + elim_i;
            menor = min(menor, suma);
        }

        cout<<menor<<'\n';
    }


    return 0;
}

/*

 */
