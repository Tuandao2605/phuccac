#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n ; cin >> n;
    vector<int> a(n,0);
    int cnt = 0;
    bool ok = true;
    for(int i = 0 ; i< n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 0){
            ok = false;
            break;
        }
        if(a[i] < 0){
            cnt++;
        }
    }
    if(ok == false){
        cout << 0 << "\n";
    }
    else if(cnt % 2 == 0){
        cout << 1 << "\n";
        cout << 1 << " " << 0 << endl;
    }
    else cout << 0 << endl;
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