#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> mp;
    //h -> highest freq of any element
    //cause operations ko mininmize krna hai
    int h = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        h = max(h,mp[arr[i]]);
    }
    int res = 0;
    int left = n-h;
    while(h<n){
        res++; //clone kr diya hai
        //swaps saare h ke h krne hai ya phir jitne bache hai utne
        //so dono ka min
        int swaps = min(left,h);
        //h hr baar double ho rha hai
        h = h*2;
        //res mein add krdo and left mein kam krdo as swap kr diya hai
        res += swaps;
        left -= swaps;
    }
    cout<<res<<endl;
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