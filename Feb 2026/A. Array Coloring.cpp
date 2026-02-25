//URL: https://codeforces.com/problemset/problem/2191/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

pair<int, char> nums[105];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        char color = 'R';
        for (int i=1; i<=n; i++) {
            cin>>nums[i].first;
            nums[i].second = color;
            color = color == 'R' ? 'A' : 'R';
        }

        sort(nums+1, nums+n+1);

        bool puede = true;
        for (int i=1; i<n && puede; i++) {
            if (nums[i].second == nums[i+1].second) puede = false;
        }

        cout<<(puede ? "YES\n" : "NO\n");
    }

    return 0;
}

/*



 */
 