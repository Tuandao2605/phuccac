#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    vector<int> cnt(1000,0);
    int dem = 0,ans = 0,max = 0;
    for(int i = 0; i < s.size(); i++){
        if(cnt[(int)(s[i])] == 0){
            dem++;
        }
        cnt[(int)(s[i])]++;
        if(cnt[(int)(s[i])] > max){
            max = cnt[(int)(s[i])];
        }
    }
    cout << (2*max) -
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