//URL: https://codeforces.com/problemset/problem/2182/A

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

        string s;
        cin>>s;

        bool dos25 = false;
        bool dos26 = false;
        for (int i=0; i+3<n; i++) {
            if (s.substr(i, 4) == "2025") dos25 = true; //solo cambiamos el digito del 5
            if (s.substr(i, 4) == "2026") dos26 = true;
        }

        if (dos26 || !dos25) {
            cout<<"0\n";
        }
        else {
            cout<<"1\n";
        }
    }

    return 0;
}

/*



 */