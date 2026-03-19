//URL: https://codeforces.com/problemset/problem/2104/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN], pref_mayor[MAXN];
ll sufi_suma[MAXN];

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

            pref_mayor[i] = max(pref_mayor[i-1], arr[i]);
        }

        sufi_suma[n+1] = 0;
        for (int i=n; i>=1; i--) sufi_suma[i] = sufi_suma[i+1] + arr[i];

        for (int k=n; k>=1; k--) { //k=1 -> sufi hasta n, k=2 -> sufi n-1, k=3 -> sufi n-2
            ll res = sufi_suma[k];
            if (pref_mayor[k] > arr[k]) {
                res -= arr[k];
                res += pref_mayor[k];
            }

            cout<<res<<' ';
        }
        cout<<'\n';
    }


    return 0;
}

/*

 */
