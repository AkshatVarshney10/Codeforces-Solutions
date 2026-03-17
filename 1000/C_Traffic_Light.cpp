#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    string curr;
    cin>>curr;
    string s;
    cin>>s;
    char ch = curr[0];
    string str = s+s;
    ll res = 0;
    ll last = 2*n;
    for(ll i=2*n-1;i>=0;i--){
        if(str[i]=='g'){
            last = i;
        }
        if(str[i]==ch){
            res = max(res,last-i);
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