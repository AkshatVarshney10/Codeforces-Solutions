#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, p;
    cin>>n>>p;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<vector<int>> temp;
    for(int i=0;i<n;i++){
        temp.push_back({b[i],a[i]});
    }
    sort(begin(temp),end(temp));
    ll res = p;
    int c = 1;
    int i = 0;
    while(c<=n && i<n){
        int cost = temp[i][0];
        int curr = temp[i][1];
        if(cost>p){
            break;
        }
        int per = min(curr, n-c);
        c += per;
        res += (1LL*per*cost);
        i++;
    }
    if(c<=n){
        res += (1LL*p*(n-c));
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