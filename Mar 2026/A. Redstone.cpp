//URL: https://codeforces.com/problemset/problem/2133/A

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

        set<int> nums;
        bool puede = false;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            if (nums.find(num) != nums.end()) puede = true;
            nums.insert(num);
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
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