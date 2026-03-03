#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    ll res = n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==i+1){
            continue;
        }
        ll diff = abs(x-i-1);
        res = min(res, diff);
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