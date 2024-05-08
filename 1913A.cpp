#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n; cin >> n;
    int a = -1,b = -1;
    bool ok = true;
    for(int i = 10000000; i >= 10; i /= 10){
        if(n == i){
            ok = false;
            break;
        }
        else if(i > n || ((n%i) < i/10)){
            continue;
        }
        else{
            a = n / i; b = n % i;
            if(a >= b || a == 0 || b == 0){
                ok = false;
            }
            break;
        }
    }
    if(a == -1 && b == -1){
        ok = false;
    }
    if(ok){
        cout << a << " " << b << endl;
    }
    else cout << -1 << endl;
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