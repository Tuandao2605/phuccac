#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n , k; cin >> n >> k;
        ll a[n+1];
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ll x = n;
        for(int i = 1; i <= min(n,k); i++){
            if(a[x] > n){
                sum++;
                break;
            }
            x = (x-a[x]+ 2*n)%n;
            if(x == 0){
                break;
            }
        }
        if(sum == 0){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}