//URL: https://codeforces.com/contest/2218/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[300005];

vector<ll> primos = {2};
vector<bool> p(1e6, true);

void criba() {
    for (ll i=3; i<1e6; i+=2) {
        if (p[i]) {
            primos.push_back(i);
            for (ll j= i*i; j<1e6; j += i) p[j] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    criba();
    while(t--) {
        int n;
        cin>>n;

        cout<<"2 ";
        for (int i=1; i<n; i++) {
            ll prod = primos[i] * primos[i-1];
            cout<<prod<<' ';
        }
        cout<<'\n';
    }



    return 0;
}

/*



 */