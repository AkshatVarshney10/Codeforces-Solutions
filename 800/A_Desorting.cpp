#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int diff = INT_MAX;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                diff = -1;
                break;
            }
            else{
                diff = min(diff,a[i]-a[i-1]);
            }
        }
        if(diff==-1){
            cout<<0<<endl;
        }
        else{
            cout<<(diff+2)/2<<endl;
        }
    }
}