#include <bits/stdc++.h>

using namespace std;

#define int long long

const int INF = 1e18;
int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

int cur,n,m ;
void solve()
{
    cin >> n >> m;
    if(n % m == 0) return cout << 0 << endl, void();
    int ans = 0, cnt = 0;
    while(n){
        n %= m;
        ans += n;
        n *= 2;
        cnt++;
        if(cnt == 50){
            ans = -1;
            break;
        }
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