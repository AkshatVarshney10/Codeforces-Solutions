#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,x;
    cin>>n>>x;
    ll sum = 0;
    ll res1 = 0;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        sum += temp;
        res1 += temp/x;
        if(temp%x!=0){
            res1++;
        }
    }
    ll res2 = 0;
    res2 += sum/x;
    if(sum%x!=0){
        res2++;
    }
    cout<<res2<<" "<<res1<<endl;
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