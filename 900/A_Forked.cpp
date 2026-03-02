#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;
vector<vector<int>> dirs = {{-1,-1},{-1,1},{1,-1},{1,1}};
void solve() {
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<p> kings;
    set<p> queens;
    for(auto& dir: dirs){
        kings.insert({xk+(dir[0]*a) ,yk+(dir[1]*b)});
        queens.insert({xq+(dir[0]*a) ,yq+(dir[1]*b)});

        kings.insert({xk+(dir[0]*b) ,yk+(dir[1]*a)});
        queens.insert({xq+(dir[0]*b) ,yq+(dir[1]*a)});
    }
    int res = 0;
    for(auto& it: kings){
        if(queens.find(it)!=queens.end()){
            res++;
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