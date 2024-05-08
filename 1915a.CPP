#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    vector<char> a(10,0);
    vector<int> cnt(3,0);
    for(int i = 1 ; i <= 9 ; i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= 9 ; i++){
        if(a[i] == 'A'){
            cnt[0]++;
        }
        else if(a[i] == 'B'){
            cnt[1]++;
        }
        else cnt[2]++;
    }
    if(cnt[0] < 3){
        cout << 'A' << endl;
    }
    else if(cnt[1] < 3){
        cout << 'B' << endl;
    }
    else cout << 'C' << endl;
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