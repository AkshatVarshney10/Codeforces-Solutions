#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int curr = 1;
    int res = 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            curr++;
            res = max(res,curr);
        }
        else{
            curr = 1;
        }
    }
    cout<<res+1<<endl;
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