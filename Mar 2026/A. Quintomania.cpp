//URL: https://codeforces.com/problemset/problem/2036/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[55];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        bool puede = true;
        for (int i=2; i<=n && puede; i++) {
            int difer = abs(arr[i] - arr[i-1]);

            if (difer != 5 && difer != 7) puede = false;
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*

1
5
01100
10101

 */

/*



*/