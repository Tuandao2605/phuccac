#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n;
    char x;
    cin >> n;
    vector<int> cnt(26, 0);
    while (n--)
    {
        cin >> x;
        cnt[x - 'a']++;
    }
    priority_queue<int, vector<int>> q;
    for (int x : cnt)
        if (x != 0)
            q.push(x);
    while (q.size() > 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        a--;
        b--;
        if (a != 0)
            q.push(a);
        if (b != 0)
            q.push(b);
    }
    cout << (q.empty() ? 0 : q.top()) << endl;
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