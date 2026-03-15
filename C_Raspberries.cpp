#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,k;
    cin>>n>>k;
    ll prod = 1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        prod *= x;
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