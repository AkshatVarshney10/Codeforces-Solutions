#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()==1){
            cout<<-1<<endl;
        }
        else{
            bool f = true;
            for(auto& it: mp){
                if(f){
                    cout<<it.second<<" "<<n-it.second<<endl;
                    for(int i=0;i<it.second;i++){
                        cout<<it.first<<" ";
                    }
                    cout<<endl;
                    f = false;
                }
                else{
                    for(int i=0;i<it.second;i++){
                        cout<<it.first<<" ";
                    }
                }
            }
            cout<<endl;
        }
    }
}

    