#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int rem = x%k;
        if(rem==0){
            rem = k;
        }
        temp.push_back({rem,i+1});
    }
    sort(begin(temp),end(temp),[](auto& a, auto& b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]>b[0];
    });
    for(int i=0;i<temp.size();i++){
        cout<<temp[i][1]<<" ";
    }
    cout<<endl;
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