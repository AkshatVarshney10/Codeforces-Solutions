// #include <bits/stdc++.h>
// using namespace std;
// bool check(string& s1, string& s2){
//     int n = s1.size();
//     int m = s2.size();
//     if(n<m){
//         return false;
//     }
//     for(int i=0;i<m-n+1;i++){
//         if(s2.substr(i,n)==s1){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         string s1,s2;
//         cin>>s1>>s2;
//         string str = s1;
//         string str2 = s1+s1;
//         string str3 = s1+s1+s1;
//         string str4 = s1+s1+s1+s1;
//         string str5 = s1+s1+s1+s1+s1;
//         string str6 = s1+s1+s1+s1+s1+s1;
//         if(check(s2,str)){
//             cout<<0<<endl;
//         }
//         else if(check(s2,str2)){
//             cout<<1<<endl;
//         }
//         else if(check(s2,str3)){
//             cout<<2<<endl;
//         }
//         else if(check(s2,str4)){
//             cout<<3<<endl;
//         }
//         else if(check(s2,str5)){
//             cout<<4<<endl;
//         }
//         else if(check(s2,str6)){
//             cout<<5<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (int op = 0; op <= 6; op++) {
        if (x.find(s) != string::npos) {
            cout << op << endl;
            return;
        }
        x += x; 
    }
    cout << -1 << endl;
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