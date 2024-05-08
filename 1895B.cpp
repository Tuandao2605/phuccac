#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

#define int long long

const int INF = 1e18;
int n;
void solve()
{
    int ans = 0;
    cin >> n;
    vector<int> a(2*n+1,0);
    for(int i = 1 ; i <= 2*n ; i++){
        cin >> a[i];
    }
    sort(a.begin()+1, a.end());
    if(n == 1){
        ans = abs(a[2] - a[1]);
    }
    else{
    for(int i = n; i >= 2; i--){
        ans += abs(a[i] - a[i-1]);
    }
    for(int i = 2*n; i >= n+2 ; i--){
        ans += abs(a[i]-a[i-1]);
    }
    
    }
    cout << ans << endl;
    for(int i = 1 ; i <= n ; i++){
        cout << a[i] << " " << a[i + n] << endl;
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