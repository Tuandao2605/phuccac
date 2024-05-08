#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    string s;
    cin >> s;
    vector<int> lowercase, uppercase;
    for (int i = 0; i < s.size(); i++)
    {
        char x = s[i];
        if (x == 'b' || x == 'B')
            s[i] = '#';
        if (x == 'b' && !lowercase.empty())
            s[lowercase.back()] = '#',
            lowercase.pop_back();
        else if (x == 'B' && !uppercase.empty())
            s[uppercase.back()] = '#',
            uppercase.pop_back();
        else
        {
            if ('a' <= x && x <= 'z')
                lowercase.push_back(i);
            else
                uppercase.push_back(i);
        }
    }
    
    for (char x : s)
        if (x != '#')
            cout << x;
    cout << endl;
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