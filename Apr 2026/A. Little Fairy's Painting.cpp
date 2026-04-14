//URL: https://codeforces.com/problemset/problem/2175/A

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
        int n;
        cin>>n;

        set<int> existen;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            existen.insert(num);
        }

        int menor = INT_MAX;
        for(auto x : existen) {
            if (x >= existen.size()) menor = min(menor, x);
        }

        cout<<menor<<'\n';
    }

    return 0;
}

/*



 */