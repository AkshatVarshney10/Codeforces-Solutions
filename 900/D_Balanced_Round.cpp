#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    ll res = 1;
    ll curr = 1;
    for(ll i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k){
            curr++;
            res = max(res,curr);
        }
        else{
            curr = 1;
        }
    }
    cout<<n-res<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}