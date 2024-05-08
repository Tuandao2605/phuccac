#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;
int n,k,d;
void solve()
{
    cin >> n >> k >> d;
    int ans = 0,cnt = 0;
    vector<int> a(n,0), b(k,0);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < k ; i++){
        cin >> b[i];
    }
    for(int i = 1; i <= d && i <= 2 * n + 5 ; i++){
        int cur = 0;
        for(int j = 0 ; j < n ; j++){
            if(a[j] == j+1){
                cur++;
            }
        }
        ans = max(ans,cur+(d-i)/2);

        for(int j = 0 ; j < b[(i-1)%k]; j++){
            a[j]++;
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