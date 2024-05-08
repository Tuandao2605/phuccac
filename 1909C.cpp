#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    vector<int> l(n,0), c(n,0),a(n,0);
    set<int> r;
    for(int i = 0 ; i < n ; i++) cin >> l[i];
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        r.insert(x);
    }
    for(int i = 0 ; i < n ; i++) cin >> c[i];
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    for(int i = n - 1; i >= 0; i++){
        
    }
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end()); 
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans += a[i]*c[i];
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