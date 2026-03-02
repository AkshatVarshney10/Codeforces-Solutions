#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool check = true;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                check = false;
            }
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

    