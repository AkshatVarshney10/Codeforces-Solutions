#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd = 0;
        int even = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0){
                even += x;
            }
            else{
                odd += x;
            }
        }
        int re = even%2;
        int ro = odd%2;
        if(re==ro){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

    