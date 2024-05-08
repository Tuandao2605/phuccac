#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int x,y,k;
    cin >> x >> y >> k;
    if(x > y){
        cout << x << endl;
    }
    else{
        if(x+k >= y){
            cout << y << endl;
        }
        else cout << 2*y - x - k << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}