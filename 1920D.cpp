#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;
const int maxn = 1e6+5;
typedef pair<int,int> ii;
ii a[maxn],int b[maxn];
int n,m,sz,k;
void solve()
{
    cin>> n >> m; sz = 0; k = 0;
    for (int i = 1; i <= n; i++)
    {
        int t; cin >> t;
        if (t == 1)
        {
            int x; cin >> x;
            if (sz > INF) continue;
            sz++;
            a[++k]={sz,x};
        }
        else
        {
            int x; cin>>x;
            x++;
            int y;
            if (sz > INF || sz == 0 || x==1) continue;
            if (sz > INF / x) y = (INF / sz) + 1;
            else y = x;
            if(y <= x){
                sz*=y;
                a[++k] = {sz,-sz/y};
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        int x; cin >> x;
        int ans=-1;
        while (true)
        {
            ii temp={x,-1e18};
            int j=lower_bound(a+1,a+k+1,temp)-a;
            if (a[j].ss<0)
            {
                int idx = -a[j].ss;
                x = ((x-1)%idx)+1;
            }
            else
            {
                ans=a[j].ss;
                break;
            }
        }
        cout<<ans<<' ';
        
    }
    cout<<'\n';
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