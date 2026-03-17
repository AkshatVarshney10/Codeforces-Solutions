#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    bool check = true;
    vector<int> ans(n);
    for(auto& it: mp){
        auto& vec = it.second;
        int sz = vec.size();
        if(sz==1){
            check = false;
            break;
        }
        for(int i=0;i<sz;i++){
            ans[vec[i]] = vec[(i+1)%sz]; 
        }
    }
    if(check==false){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<endl;
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