#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int a = n-1;
    int b = 1;
    int resa = a;
    int resb = b;
    ll res = (1LL*a*b)/(__gcd(a,b));
    while(b<=n/2){
        ll lcm = ((1LL*a*b)/(__gcd(a,b)));
        if(res>lcm){
            resa = a;
            resb = b;
            res = lcm;
        }
        a--;
        b++;
    }
    cout<<resa<<" "<<resb<<endl;
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