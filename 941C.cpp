#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    vector<int> a(n),b;
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    set<int> s;
    for(int i = 0; i < n ; i++){
        s.insert(a[i]);
    }
    for(int x : s){
        b.push_back(x);
    }
    int idx = -1;
    if(b[0] != 1) return cout << "Alice" << endl,void();
    for(int i = 0 ; i < n - 1  ; i++){
        if(b[i+1] - b[i] == 1){
            cnt++;
            idx = i+1;
        }
         if(b[i+1] - b[i] != 1){
            break;
        }
    }
    if(b.size() == 1) return cout << "Alice" << endl,void();
    if((cnt % 2 == 1 && idx != b.size() - 1) || (cnt % 2 == 0 && idx == b.size() - 1)) cout << "Alice" << endl;
    else cout << "Bob" << endl;
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