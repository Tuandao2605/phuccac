#include <iostream>
#include <vector>
using namespace std;
const int N = 2e5+5;
int t,n,a[N];
int main(){
    cin >> t;
    while(t--){
    cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dp(n+1,-1000*N);
    dp[0] = 0;
    for(int i = 1; i <= n ; i++){
       int vet = dp[a[i]];w
       dp[a[i]] = max(dp[a[i]], dp[0] - i + 1);
       dp[0] = max(dp[0], vet + i);
    }
    cout << dp[0] << "\n";
    }
    return 0;
}     