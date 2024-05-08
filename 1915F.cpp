#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n;cin >> n;
    vector<pair<int,int>> a(n);
    int ans = 0;
    for(int i = 0; i < n ;i++){
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 0 ; i < n ; i++){
        
    }
    ans += n*(n+1)/2;
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