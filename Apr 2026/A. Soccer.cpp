//URL: https://codeforces.com/problemset/problem/1982/A

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
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;

        bool puede = true;
        if (x1 <= y1 && x2 >= y2) puede = false;
        if (y1 <= x1 && y2 >= x2) puede = false;

        cout<<(puede ? "YES\n" : "NO\n");
    }

    return 0;
}

/*



 */