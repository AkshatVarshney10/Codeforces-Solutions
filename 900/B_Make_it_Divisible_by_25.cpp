#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int solve2(string s, string target){
    int n = s.size();
    int pos2 = -1;
    int pos1 = -1;
    for(int i=n-1; i>=0; i--){
        if(s[i]==target[1]){
            pos2=i;
            break;
        }
    }
    if(pos2 == -1){
        return 1e9;
    }
    for(int i=pos2-1; i>=0; i--){
        if(s[i]==target[0]){
            pos1=i;
            break;
        }
    }
    if(pos1 == -1){
        return 1e9;
    }
    return (n - pos1 - 2);
}
void solve() {
    string n;
    cin>>n;
    int res = 1e9;
    res = min(res,solve2(n,"00"));
    res = min(res,solve2(n,"25"));
    res = min(res,solve2(n,"50"));
    res = min(res,solve2(n,"75"));
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