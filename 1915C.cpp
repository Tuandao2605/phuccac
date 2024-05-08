#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n;cin >> n;
    vector<int> a(n,0);
    int sum = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
        sum += a[i];
    }
    int ans = sum;
    sum = sqrt(sum);
    ans -= sum * sum;
    if(ans == 0){
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