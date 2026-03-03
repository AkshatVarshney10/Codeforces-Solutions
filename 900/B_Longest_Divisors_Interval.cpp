#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    long long res = 0;
    for(long long i=1;i<=n;i++){
        if(n%i==0){
            res++;
        }
        else{
            break;
        }
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