#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll l; cin >> l;
        int k1 = l;
       
        ll r; cin >> r;
        int  cnt = 0; 
        while( l <= r ){
            cnt++;
            l *= 2;
        }
        ll s = l * 3;
        int cnt1 = 0;
        cout << cnt << " ";
        cnt1 += r*2*k1/l-k1 + 1;
        if((r * 4 * k1/s - k1) >= 0){
        cnt1 += (r * 4 * k1/s - k1 + 1)*(cnt - 1);
        }
        cout << cnt1 << "\n";
    }
    return 0;
}