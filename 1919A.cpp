#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int a,b; cin >> a >> b;
    if((a+b) % 2 == 0){
        cout << "Bob" << endl;
    }
    else cout << "Alice" << endl;
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