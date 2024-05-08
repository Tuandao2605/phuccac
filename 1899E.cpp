#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        int mn = INT_MAX;   
        int minvalue = 0; 
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] < mn){
                mn = a[i];
                minvalue = i;
            }
        }
        int cnt = 0;
        for(int i = minvalue; i < n; i++){
            if((a[i] - a[i+1]) > 0){
                cnt++;
                break;
            }
        }
        if(cnt == 0){
            cout << minvalue - 1 << "\n";
        }
        else cout << -1 << "\n";    
    }
    return 0;
}