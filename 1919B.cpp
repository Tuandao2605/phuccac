#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n ; cin >> n;
    int cnt = 0;
    string s; 
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+'){
            cnt++;
        }
    }
    cout << abs(2*cnt - n) << endl;
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