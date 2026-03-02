#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = 0;
        int curr = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0){
                curr++;
                res = max(res,curr);
            }
            else{
                curr = 0;
            }
        }
        cout<<res<<endl;
    }
}

    