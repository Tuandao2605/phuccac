#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;
const int MAXN = 2e5 + 16;

int n;
int l[MAXN], r[MAXN];

bool check(int k)
{
    int pos = 0, rpre = r[n], lpre = l[n];
    for (int i = n - 1; i >= 0; i--)
    {
        lpre = max(lpre - k, l[i]);
        rpre = min(rpre + k, r[i]);
        if (rpre < lpre)
            return false;
    }
    return true;
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
    int res = INF, lo = 0, hi = 1e18;
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        if (check(mid))
            res = min(res, mid),
            hi = --mid;
        else
            lo = ++mid;
    }
    cout << res << endl;
}

signed main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}