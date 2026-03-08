#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n*k);
    for(ll i=0;i<n*k;i++){
        cin>>a[i];
    }
    ll res = 0;
    ll ptr = n*k;
    while(k--){
        ptr -= (n/2 +1);
        res += a[ptr];
    }
    cout<<res<<endl;
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