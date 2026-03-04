#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    if(n%2==1 || n<4){
        cout<<-1<<endl;
    }
    else{
        ll mn = (n+5)/6;
        ll mx = n/4;
        cout<<mn<<" "<<mx<<endl;
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