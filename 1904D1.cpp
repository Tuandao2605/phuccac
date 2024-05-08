#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    bool ok = true;
    vector<int> a(n,0),b(n,0),cnt(1001,0);
    for(int i = 0; i <n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ;i < n ; i++){
        cin >> b[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] > b[i]){
            ok = false;
            break;
        }
    }
    if(ok){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; i++){
                if(b[i] = a[j]){
                    cnt[b[j]]++;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(!cnt[b[i]]){
                ok = false;
            }
        }
    }
    if(ok){
        for(int i = 0 ; i < n ; i++){
            
        }
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