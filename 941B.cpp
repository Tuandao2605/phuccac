#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n,m;  cin >> n >> m;
    char a[501][501];
    int cnt[2];
    cnt[1] = 0;
    cnt[2] = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= m; j++)
        cin >> a[i][j];
    }
    if(n == 1 && m == 1) return cout << "YES" << endl , void();
    if(m == 1){
        if(a[1][1] == a[n][1]) return cout << "YES" << endl , void();
        return cout << "NO" << endl, void(); 
    }
    if(n == 1){
        if(a[1][1] == a[1][m]) return cout << "YES" << endl, void();
        return cout << "NO" << endl, void();
    }
    if(a[1][1] == a[n][m] || a[n][1] == a[1][m]) return cout << "YES" << endl, void();
    for(int i = 1 ; i <= m ; i++){
        if(a[1][i] == 'B' && cnt[1] == 0) cnt[1]++;
        if(a[1][i] == 'W' && cnt[2] == 0) cnt[2]++;
    }
    for(int i = 1 ; i <= m ; i++){
        if(a[n][i] == 'B' && cnt[1] == 1) cnt[1]++;
        if(a[n][i] == 'W' && cnt[2] == 1) cnt[2]++;
    }
    for(int i = 1 ; i <= n ; i++){
        if(a[i][m] == 'B' && cnt[1] == 2) cnt[1]++;
        if(a[i][m] == 'W' && cnt[2] == 2) cnt[2]++;
    }
    for(int i = 1 ; i <= n ; i++){
        if(a[i][1] == 'B' && cnt[1] == 3) cnt[1]++;
        if(a[i][1] == 'W' && cnt[2] == 3) cnt[2]++;
    }
    if(cnt[1] == 4 || cnt[2] == 4){
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