#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    ll resa = 1;
    ll resb = n-1;
    for(ll fac=2;fac*fac<=n;fac++){
        if(n%fac==0){
            resa = n/fac;
            resb = n-resa;
            break;
        }
    }
    cout<<resa<<" "<<resb<<endl;
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