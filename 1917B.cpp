#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n ; cin >> n;
    string s;
    cin >> s;
    vector<int> cnt(26,0);
    int res = 0,ans = 0;
    for(int i = 0; i < n ; i++){
        if(cnt[s[i] - 'a'] == 0){
            res++;
            ans += res;
        }
        else ans += res;
        cnt[s[i] - 'a']++;
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