//URL: https://codeforces.com/contest/2218/problem/C#

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[300005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int peque = 1;
        for (int i=3*n-2; i>=1; i-=3) {
            arr[i] = peque;
            peque++;
        }

        int ultim;
        for (int i=1; i<=3*n; i+=3) {
            if (i == 1) {
                cout<<arr[i]<<' '<<arr[i]+1<<' '<<arr[i]+2<<' ';
                ultim = arr[i]+2;
            }
            else {
                cout<<arr[i]<<' '<<ultim+1<<' '<<ultim+2<<' ';
                ultim += 2;
            }
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */