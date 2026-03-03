#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, q;
    cin>>n>>q;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> pref(n);
    pref[0] = arr[0];
    for(ll i=1;i<n;i++){
        pref[i] = pref[i-1]+arr[i];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll len = r-l+1;
        ll sz = pref[r-1];
        if(l-2>=0){
            sz -= pref[l-2];
        }
        if((pref[n-1]-sz+(len*k))%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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