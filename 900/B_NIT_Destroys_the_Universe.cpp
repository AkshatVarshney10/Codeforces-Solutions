#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int c = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            c++;
        }
    }
    int l = 0;
    int r = n-1;
    while(l<n && a[l]==0){
        l++;
    }
    while(r>=0 && a[r]==0){
        r--;
    }
    bool check = false;
    for(int i=l;i<=r;i++){
        if(a[i]==0){
            check = true;
        }
    }
    if(c==n){
        cout<<0<<endl;
    }
    else if(check == false){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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