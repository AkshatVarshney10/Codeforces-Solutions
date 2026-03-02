#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long res = 0;
        vector<vector<char>> vec(10, vector<char>(10));
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> vec[i][j];
            }
        }
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(vec[i][j] == 'X'){
                    int layer = min(min(i, 9 - i), min(j, 9 - j));
                    res += layer + 1;
                }
            }
        }
        cout << res << endl;
    }
}