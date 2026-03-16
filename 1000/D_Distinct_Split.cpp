#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    for(int i=0;i<n;i++){
        char curr = s[i];
        mp1[curr]++;
    }
    int res = 0;
    for(int i=0;i<n-1;i++){
        char curr = s[i];
        mp2[curr]++;
        mp1[curr]--;
        if(mp1[curr]==0){
            mp1.erase(curr);
        }
        int sz = mp1.size()+mp2.size();
        res = max(res, sz);
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