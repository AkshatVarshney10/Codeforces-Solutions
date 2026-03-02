// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,a,b;
//         cin >>n>>k>>a>>b;
//         unordered_map<int,pair<int,int>> mp;
//         for(int i=0;i<n;i++){
//             int x,y;
//             cin>>x;
//             cin>>y;
//             mp[i] = {x,y};
//         }
//         int x = INT_MAX;
//         int y = INT_MAX;
//         for(int i=k;i<n;i++){
//             int x1 = mp[a].first;
//             int y1 = mp[a].second;
//             int x2 = mp[i].first;
//             int y2 = mp[i].second;

//             int d1 = abs(x1-x2) + abs(y1-y2);
//             x = min(x,d1);

//             x1 = mp[b].first;
//             y1 = mp[b].second;
//             int d2 = abs(x1-x2) + abs(y1-y2);
//             y = min(y,d2);
//         }

//         cout << min(direct, x + y) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,a,b;
        cin >> n >> k >> a >> b;
        a--; 
        b--;
        vector<pair<long long,long long>> city(n);
        for(int i=0;i<n;i++){
            cin >> city[i].first >> city[i].second;
        }
        long long direct = llabs(city[a].first - city[b].first) +
                           llabs(city[a].second - city[b].second);
        if(k == 0){
            cout << direct << endl;
            continue;
        }
        long long distA = LLONG_MAX;
        long long distB = LLONG_MAX;
        for(int i=0;i<k;i++){
            distA = min(distA,
                llabs(city[a].first - city[i].first) +
                llabs(city[a].second - city[i].second));

            distB = min(distB,
                llabs(city[b].first - city[i].first) +
                llabs(city[b].second - city[i].second));
        }
        cout << min(direct, distA + distB) << endl;
    }
}