#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int INF = 1e18;
int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
void solve()
{
    int n; cin >> n;
    int k = 2;
    bool ok = true;
    vector<int> a(n,0),b;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    while(ok){
        for(int i = 1 ; i < n ; i++){
            if(a[i] % k != a[0] % k){
                cout << k << endl;
                ok = false;
                break;
            }
        }
        k *= 2;
    }
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