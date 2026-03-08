#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){ 
        cin >> a[i];
    }
    vector<int> left(n), right(n);

    left[0] = 0;
    for(int i=1;i<n;i++){
        if(a[i-1] < a[left[i-1]]){
            left[i] = i-1;
        }
        else{
            left[i] = left[i-1];
        }
    }

    right[n-1] = n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i+1] < a[right[i+1]]){
            right[i] = i+1;
        }
        else{
            right[i] = right[i+1];
        }
    }

    for(int j=1;j<n-1;j++){
        if(a[left[j]]<a[j] && a[right[j]]<a[j]){
            cout<<"YES\n";
            cout<<left[j]+1<<" "<<j+1<<" "<<right[j]+1<<"\n";
            return;
        }
    }

    cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}