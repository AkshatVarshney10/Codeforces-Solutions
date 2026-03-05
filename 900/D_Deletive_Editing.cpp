#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size();
    int n2 = s2.size();
    vector<int> freq(26,0);
    //second string ki freq rkh rhe
    for(int i=0;i<n2;i++){
        freq[s2[i]-'A']++;
    }
    //lets say s1 mein 5 A hai and s2 mein 3 A hain
    //do A s1 mein se delete krne hain so left most waale delete honge--> koi aur option nhi hai
    //oolta loop chalakr dekho and extra letters ko '.' se replace krdoo
    for(int i=n1-1;i>=0;i--){
        char ch = s1[i];
        if(freq[ch-'A']>0){
            freq[ch-'A']--;
        }
        else{
            s1[i]='.';
        }
    }
    //string banake check kro if it matches
    string temp = "";
    for(int i=0;i<n1;i++){
        if(s1[i]!='.'){
            temp+=s1[i];
        }
    }
    if(temp==s2){
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