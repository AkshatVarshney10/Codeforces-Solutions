#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int a, b;
    cin>>a>>b;
    int part = a / (b + 1);
    int extra = a % (b + 1);

    for(int i = 0; i <= b; i++){
        int cnt = part + (i < extra ? 1 : 0);
        for(int j = 0; j < cnt; j++){
            cout << "R";
        }
        if(i < b){ 
            cout << "B";
        }
    }

    cout << endl;
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