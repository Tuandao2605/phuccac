#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;
int cnt[100] = {};
void solve()
{

    int n,k;
    cin >> n >> k;
    for(int i = 0 ; i <= 100;i++){
        cnt[i] = 0;
    }
    vector<int> a(100001);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n ; i++){
        cnt[a[i]]++;
    }
    int mx = -1;
    for(int i = 0 ; i < n ; i++){
        if(cnt[a[i]] > mx){
            mx = cnt[a[i]];
        }
    }
    if(mx >= k){ cout << k-1 << endl;}
    else  cout << n << endl;
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