#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll> pref(n+1,0);
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            pref[i+1] = pref[i]+1;
        }
        else{
            pref[i+1] = pref[i];
        }
    }
    ll res = INT_MAX;
    for(int i=0;i<=n-k;i++){
        ll diff = pref[i+k]-pref[i];
        res = min(res,diff);
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