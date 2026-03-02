#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    long long c = b;
    for(int i=0;i<n;i++){
        c += min(arr[i], a-1);
    }
    cout<<c<<endl;
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