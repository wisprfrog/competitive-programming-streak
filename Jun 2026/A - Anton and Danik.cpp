//URL: https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int a = 0, d = 0;
    for (int i=1; i<=n; i++) {
        char gana;
        cin>>gana;

        if (gana == 'A') a++;
        else d++;
    }

    if (a == d) cout<<"Friendship\n";
    else if (a > d) cout<<"Anton\n";
    else cout<<"Danik\n";

    return 0;
}

/*



 */