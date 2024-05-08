#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define fi frist
#define se second

const ll INF = 1e18;
vector<int> dp(5001,0),a(5001,0);
void solve()
{
    int n; cin >> n;
    int end = 0, ans = 0, cur = 0;
    vector<int> cnt(5001,0);
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 5000){
            continue; 
        }
        else cnt[a[i]]++;
    }
    for(int i = 0; i <= 5000 ; i++){
        if(cnt[i] == 0){
            end = i;
            break;
        }
    }
}

int main()
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