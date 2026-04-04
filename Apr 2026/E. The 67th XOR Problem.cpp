//URL: https://codeforces.com/contest/2218/problem/E

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[300005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        int mayor = INT_MIN;
        for (int i=1; i<n; i++) {
            for (int j=i+1; j<=n; j++) mayor = max(mayor, arr[i]^arr[j]);
        }

        cout<<mayor<<'\n';
    }



    return 0;
}

/*



 */