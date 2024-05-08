#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int INF = 1e18;

void solve()
{
    int n ; cin >> n;
    string s;
    vector<char> s1(n,0);
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a' || s[i] == 'e'){
            s1[i] = 'V';
        }
        else s1[i] = 'C';
    }
    for(int i = 0; i < n - 2 ; i++){
        if(s1[i] == 'V' && s1[i+2] == 'C'){
            cout << s[i++] << s[i] << "." ; 
        }
        else if(s1[i] == 'V' && s1[i+2] == 'V'){
            cout << s[i] << ".";
        }
        else cout << s[i];
    }
    cout << s[n-2] << s[n-1];
    cout << endl;
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