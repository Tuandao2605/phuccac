#include <bits/stdc++.h>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    for(int k = 1 ; k <= n ; k++){
        if(n % k == 0){
            vector<vector<int>> b(k);
            int t = 0;
            for(int i = 0; i < n ; i++){
                b[i%k].push_back(a[i]);
            }
            for(auto &x : b){
                    if(x.size() == 1){
                        continue;
                    }
                    for(int j = 1; j < x.size(); j++){
                        t = __gcd(t,abs(x[j] - x[j-1]));
                    }
            }
            if(t != 1) ans++;
        }
    }
    cout << ans << endl;
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