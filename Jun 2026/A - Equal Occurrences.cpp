//URL: https://codeforces.com/problemset/problem/2146/A

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

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        map<int, int> frec;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            frec[num]++;
        }

        map<int, int> cube_frec;
        for (auto [prim, sec] : frec) cube_frec[sec]++;

        vector<pair<int, int>> comb;
        for (auto x : cube_frec) comb.push_back(x);
        sort(all(comb));

        int mayor = 1;
        for (int i=0; i<comb.size(); i++) {
            int suma = 0;
            for (int j=i; j<comb.size(); j++) suma += comb[j].second * comb[i].first;

            mayor = max(mayor, suma);
        }

        cout<<mayor<<'\n';
    }

    return 0; //overkillee perdon
}

/*



 */