#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll x, n;
    cin>>x>>n;
    if(x%2==0){
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x-n<<endl;
        }
        else if(n%4==2){
            cout<<x+1<<endl;
        }
        else{
            cout<<x+n+1<<endl;
        }
    }
    else{
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x+n<<endl;
        }
        else if(n%4==2){
            cout<<x-1<<endl;
        }
        else{
            cout<<x-n-1<<endl;
        }
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