#include <iostream>

using namespace std;

void solve()
{
    string s; cin >> s;
    for (int i = 1; i <= 8; i++)
        if (i != (s[1] - '0'))
            cout << s[0] << i << endl;

    for (int i = 0; i < 8; i++)
        if ('a' + i != s[0])
            cout << char('a'+i) << s[1] << endl;
    
}

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--)
    {
    solve();
    }
    return 0;
}