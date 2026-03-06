#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    bool check = false;
    if(((((2*b)-c)%a)==0) && ((((2*b)-c)/a)>0)){
        check = true;
    }
    else if(((c-a)%2)==0 && (((c+a)%(2*b))==0) && (((c+a)/(2*b))>0)){
        check = true;
    }
    else if(((((2*b)-a)%c)==0) && ((((2*b)-a)/c)>0)){
        check = true;
    }
    if(check==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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