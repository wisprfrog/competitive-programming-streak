//URL: https://codeforces.com/contest/2204/problem/A

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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int alum = 1;
        for (char x : s) {
            if (x == 'R') alum++;
            else break;
        }

        cout<<alum<<'\n';
    }


    return 0;
}

/*

1
3 4
0110
0110
0110

 */