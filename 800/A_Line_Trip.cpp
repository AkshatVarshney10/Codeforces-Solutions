#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int x;
        cin>>x;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            arr.push_back(y);
        }
        arr.push_back(x);
        int ans = 0;
        int sz = arr.size();
        for(int i=1;i<sz;i++){
            ans = max(ans,arr[i]-arr[i-1]);
        }
        ans = max(ans, 2*(arr[sz-1]-arr[sz-2]));
        cout<<ans<<endl;
    }
}

    