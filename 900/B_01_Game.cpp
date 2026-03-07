#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    int c0=0;
    int c1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    int ops = min(c0,c1);
    if(ops%2==1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
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