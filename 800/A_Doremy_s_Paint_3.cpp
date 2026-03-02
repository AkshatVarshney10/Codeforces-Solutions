#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        if(freq.size() == 1){
            cout << "Yes\n";
        }
        else if(freq.size() == 2){
            auto it = freq.begin();
            int f1 = it->second;
            it++;
            int f2 = it->second;

            if(abs(f1 - f2) <= 1){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
        else{
            cout << "No\n";
        }
    }
}