#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res = a[n-1]-a[0];
    for(int i=1;i<n;i++){
        res = max(res, a[i-1]-a[i]);
        res = max(res, a[i]-a[0]);
    }
    for(int i=0;i<n-1;i++){
        res = max(res, a[n-1]-a[i]);
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