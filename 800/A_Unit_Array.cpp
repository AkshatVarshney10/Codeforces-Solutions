#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        int prod = 1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum += x;
            prod *= x;
        }
        int res = 0;
        if(sum<0){
            res += ((sum*-1)+1)/2;
            if(res%2==1){
                prod *= -1;
            }
        }
        if(prod==-1){
            res++;
        }
        cout<<res<<endl;
    }
}

    