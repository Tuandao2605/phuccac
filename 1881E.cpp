#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define N 1e9+2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    int flag = 0;
    while(t--){
        int n ; cin >> n;
        int a[n+1],dp[n+5];
        int ans = 0; int cnt = 0;
        dp[n+1] = 0;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = n; i >= 1; i--){
          if(i + a[i] <= n){
            dp[i] = min(dp[i+1] + 1,dp[i+a[i]+1]);
          }
          else dp[i] = dp[i+1] + 1;
        }
        cout << dp[1] << "\n";
    }
    return 0;
}