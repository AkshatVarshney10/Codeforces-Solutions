#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int c0 = 0;
    int c1 = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            c0++;
        }
        if(x==1){
            c1++;
        }
    }
    if(c1==0){
        cout<<0<<endl;
    }
    else{
        ll res = 0;
        res += c1;
        while(c0--){
            res *= 2;
        }
        cout<<res<<endl;
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