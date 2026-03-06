#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }
    if(a==b){
        cout<<0<<" "<<0<<endl;
    }
    else{
        ll d = abs(a-b);
        ll moves = min(b%d, d-(b%d));
        cout<<d<<" "<<moves<<endl;
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