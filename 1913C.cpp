#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1,0),dp(n + 1,0);
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
    }
    dp[1] = 1;
    int mn = INT_MAX;
    for(int i = 1 ; i < n ; i++){
        if(a[i] < a[i + 1]){
            dp[i+1] = dp[i] * 2;
        }
        if(a[i] > a[i + 1]){
            dp[i+1] = (dp[i]-1) * 2 + 1;    
        }
    }
    cout << dp[n] << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}