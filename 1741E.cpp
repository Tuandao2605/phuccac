#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;
int  n;
void solve()
{
    cin >> n;
    int vet = n,cnt = 0;
    vector<int> a(n+1,0);
    vector<bool> dp(n+1,0);
    vector<vector<int>> next(n+1);
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        if(i - a[i] > 0){
            next[i-a[i]].push_back(i);
        }
    }
    for(int i = 1; i <= n ; i++){
        if(dp[i-1]){
            for(auto x : next[i]){
                a[x] = true;
            }
            if(i + a[i] <= n){
                dp[i+a[i]] = true;
            }
        }
        
    }
    if(dp[n] ? "YES" : "NO");

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