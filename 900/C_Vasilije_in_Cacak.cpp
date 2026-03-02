#include <bits/stdc++.h>
using namespace std;

typedef long long ull;
void solve() {
    // ull n,k,x;
    // cin>>n>>k>>x;
    // int d = n-k;
    // ull l = k*(k+1)/2;
    // ull r = (n*(n+1)/2) - (d*(d+1)/2);
    // if(x>=l && x<=r){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
    long long n, k, x;
	cin >> n >> k >> x; 
	long long minimum_sum = (k * (k + 1)) / 2;
	long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
	if (x >= minimum_sum && x <= maximum_sum){
		cout << "YES" << endl; 
    }
	else{
		cout << "NO" << endl; 
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