#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    bool ok = false;
    int n; cin >> n;
    vector<int> a(n + 1,0),b(n+1,0),c(n + 1,0);
    int cnt = 0 ;
    int ans = 0,cur = 0,start = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    sort(a.begin() + 1,a.end());
    for(int i = 1 ; i <= (n-1)/2 ; i++){
        if(a[i] >= a[n/2 + i]){
            cur = i;
            ok = true;
            break;
        }
        cnt++;
    }
    if(ok){
    for(int i = n ; i >= n/2 + cur; i--){
        if(a[i] <= a[cur]){
            break;
        }
        ans++;
    }
    }
    for(int i = 1,idx = 2,idx1 = 1; i <= n ; i++){
        if(i <= n/2){
            c[idx] = a[i];
            idx += 2;
        }
        if(i >= n/2 + 1){
            c[idx1] = a[i];
            idx1 += 2;
        }
    }
    if(ans == 0){
        cnt++;
    }
    cout << cnt + ans - 1 << endl;
    for(int i = 1; i <= n ; i++){
        cout << c[i] << " ";
    }
    return 0;
}