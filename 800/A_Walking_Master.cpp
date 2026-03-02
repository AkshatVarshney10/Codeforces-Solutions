#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int res = abs(d-b);
        a += res;
        if(b>d||c>a){
            cout<<-1<<endl;
        }
        else{
            res += abs(c-a);
            cout<<res<<endl;
        }
    }
}

    