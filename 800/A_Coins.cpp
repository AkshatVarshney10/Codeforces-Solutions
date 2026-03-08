#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,k;
    cin>>n>>k;
    if(n%2==0||(n-k)%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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