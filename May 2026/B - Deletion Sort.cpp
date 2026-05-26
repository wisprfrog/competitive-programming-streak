//URL: https://codeforces.com/problemset/problem/2200/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int a[11];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>a[i];

        if (is_sorted(a+1, a+n+1)) cout<<n<<'\n';
        else cout<<"1\n";
    }

    return 0;
}

/*



 */