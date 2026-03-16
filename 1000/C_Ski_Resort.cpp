#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,k,q;
    cin>>n>>k>>q;

    ll res = 0;
    int curr = 0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x<=q){
            curr++;
        }
        else{
            if(curr>=k){
                ll len = curr-k+1;
                res += len*(len+1)/2;
            }
            curr = 0;
        }
    }

    if(curr>=k){
        ll len = curr-k+1;
        res += len*(len+1)/2;
    }

    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}