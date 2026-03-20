//URL: https://codeforces.com/contest/2204/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN];
vector<pair<int,int>> primera;
map<int, int> met;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) {
            cin>>arr[i];

            if (met.find(arr[i]) == met.end()) {
                met[arr[i]] = i;
                primera.push_back({arr[i], i});
            }
        }
        sort(primera.begin(), primera.end(), greater<pair<int,int>>());

        int oper = 0;
        int pos = n;
        for (int i=0; i<primera.size(); i++) {
            while (pos >= primera[i].second) {
                if (arr[pos] == primera[i].first) oper++;
                pos--;
            }
        }

        cout<<oper<<'\n';
        primera.clear();
        met.clear();
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