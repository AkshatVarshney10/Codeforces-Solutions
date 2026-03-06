#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin>>s;
    int ab=0;
    int ba=0;
    int n = s.size();
    for(int i=1;i<n;i++){
        if(s[i]=='b'&&s[i-1]=='a'){
            ab++;
        }
        if(s[i]=='a'&&s[i-1]=='b'){
            ba++;
        }
    }
    if(ab==ba){
        cout<<s<<endl;
    }
    else if(ba>ab){
        s[n-1] = 'b';
        cout<<s<<endl;
    }
    else{
        s[n-1] = 'a';
        cout<<s<<endl;
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