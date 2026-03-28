//URL: https://codeforces.com/problemset/problem/1499/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        bool puede = true;
        for (int i=1; i<s.size() && puede; i++) {
            if (s[i] == s[i-1]) {
                if (s[i] == '1') {
                    for (int j=i+1; j<s.size()-1 && puede; j++) if (s.substr(j, 2) == "00") puede = false;
                }
                else {
                    for (int j=i-1; j>=1 && puede; j--) if (s.substr(j, 2) == "11") puede = false;
                }
            }
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}