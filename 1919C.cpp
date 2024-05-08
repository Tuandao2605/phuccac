#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n; cin >> n;
    vector<int> a(n,0);
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    int ans = 0;
    int x = INT_MAX, y = INT_MAX;
    for(int i = 0; i < n ;i++){
        if(a[i] <= x){
            x = a[i];
        }
        else if(a[i] <= y){
             y = a[i];
        }
        else{
            ans++;
            x = y; y = a[i];
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}