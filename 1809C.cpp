#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

#define int long long

const int INF = 1e18;
const int N = 2e5+5;
int a[N];
void solve()
{
    int n,k; cin >> n >> k;
    for(int i = 1; i <= n ;i++){
        a[i] = -2;
    }
    int cur = n,idx = 1;
    while(k >= cur){
        a[idx++] = 1000;
        k -= cur;
        cur--;
        if(cur == 0){
            break;
        }
    }
    if(k == 0){

    }
    else if(k < cur){
        a[idx] = 2*(k-1) + 1; 
    }
    for(int i = 1 ; i <= n - 1 ; i++){
        cout << a[i] << " ";
    }
    cout << a[n] << endl;
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