//URL: https://codeforces.com/problemset/problem/1155/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

int sufijo[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    string s;
    cin>>s;

    sufijo[n-1] = n-1;
    for (int i=n-2; i>=0; i--) {
        if (s[sufijo[i+1]] <= s[i]) sufijo[i] = sufijo[i+1];
        else sufijo[i] = i;
    }

    bool puede = false;
    pair<int, int> res;
    for (int i=0; i<n && !puede; i++) {
        if (s[sufijo[i]] < s[i]) {
            res = {i+1, sufijo[i]+1};
            puede = true;
        }
    }

    if (puede) cout<<"YES\n"<<res.first<<' '<<res.second<<'\n';
    else cout<<"NO\n";


    return 0;
}

/*

 */
