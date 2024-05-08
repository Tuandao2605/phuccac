#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    bool ok = false;
    vector<int> cnt(4,0),cnt2(4,0);
    vector<int> a(n,0),b(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n ; i++){
        if(a[i] >= 0){
            cnt[0]++;
        }
        if(a[i] <= 0){
            cnt[1]++;
        }
        if(b[i] >= 0){
            cnt[2]++;
        }
        if(b[i] <= 0){
            cnt[3]++;
        }
    }
    for(int i = 0 ; i < 4 ; i++){
        if(cnt[i] == n){
            ok = true;
        }
    }
    if(ok){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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