//URL: https://codeforces.com/problemset/problem/2178/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        int yes = 0, no = 0;
        for (auto x : s) x == 'Y' ? yes++ : no++;

        if (yes > 1) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}

/*



 */