//URL: https://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int fil, col;
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            int num;
            cin>>num;

            if (num == 1) {
                fil = i;
                col = j;
            }
        }
    }

    int res = abs(fil-3) + abs(col-3);
    cout<<res<<'\n';



    return 0;
}

/*



 */