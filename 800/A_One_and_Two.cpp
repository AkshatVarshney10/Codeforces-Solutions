#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int c = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2){
                c++;
            }
        }
        int count = 0;
        if(c%2==1){
            cout<<-1<<endl;
        }
        else{
            int res = 0;
            if(c==count){
                cout<<res+1<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]==2){
                        count++;
                        c--;
                        if(count==c){
                            res = i+1;
                            break;
                        }
                    }
                }
                cout<<res<<endl;
            }
        }
        
        
        
    }
}

    