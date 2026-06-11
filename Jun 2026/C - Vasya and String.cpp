//URL: https://codeforces.com/contest/676/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 150001;
const int MOD = 1e9 + 7;
#define pb push_back

#define all(c) (c).begin(), (c).end()
#define find_set(c, a) ((c).find(a) != (c).end())
#define in_range(x, l, r) ((x) >= (l) && (x) <= (r))
#define debug(x) cout << #x << " -> " << x <<'\n';


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;
    cin.ignore();

    string s;
    cin>>s;

    int mayor = 0, l = 0;
    int cont_a = 0, cont_b = 0;

    for (int r=0; r<n; r++) {
        if (s[r] == 'a') cont_a++;
        else cont_b++;

        //el menor porque queremos abarcar mas quitando menos
        while (min(cont_a, cont_b) > k) {
            if (s[l] == 'a') cont_a--;
            else cont_b--;

            l++;
        }

        mayor = max(mayor, r-l+1);
    }

    cout<<mayor<<'\n';


    return 0;
}

/*



*/