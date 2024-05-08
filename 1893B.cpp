#include <bits/stdc++.h>
using namespace std;
bool cmp(int x, int y){
    return x > y;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n+1],b[m+1];
        for(int i = 1; i <= n; i++)cin >> a[i];
        for(int i = 1; i <= m; i++)cin >> b[i];
        sort(b+1, b+m+1,cmp);
        int val = INT_MAX;
        int bi = 1;
        vector<int> v;
        for(int i = 1 ; i <= n ; i++){
            if(val > a[i]){
                while(bi <= m && b[bi] >= a[i])v.push_back(b[bi++]);
                val = a[i];
            }
            v.push_back(a[i]);
        }
        while(bi<=m)v.push_back(b[bi++]);
        for(int i = 0; i < m + n; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}