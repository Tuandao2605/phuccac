#include<bits/stdc++.h>
using namespace std;
map<int,long long>cnt;
int main(){
    int t; cin >> t;
    while(t--){
        long long sum = 0;
        int n; cin >> n;
        long long a[n+1];
        cnt.clear();
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += cnt[a[i]];
            cnt[a[i]]++;
        }
        cout << sum + cnt[1]*cnt[2] << endl;
    }
    return 0;
}