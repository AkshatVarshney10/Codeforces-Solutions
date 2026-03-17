#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,d;
    cin>>n>>d;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a.begin(), a.end()); 
	ll left = -1;
	ll right = n - 1; 
	ll team_size = 1; 
	ll teams = 0; 
	while (left < right){
		if ((a[right] * team_size) <= d && left < right){
			left++;
			team_size++;
		}
		else{
			teams++;
			right--;
			team_size = 1;
		}
	}
    cout<<teams<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}