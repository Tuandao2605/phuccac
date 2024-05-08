#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define int long long

const int INF = 1e18;
string s;
void solve()
{
    cin >> s;
    cin.ignore();
    vector<int> a(2,0);
    bool ok = true;
    for(int i = 0; i < s.size() ;i++){
        if(s[i] == '0'){
            a[0]++;
        }
        else a[1]++;
    }
    for(int i = 0; i < s.size();i++){
        if(s[i] == '0'){
            a[1]--;
            if(a[1] < 0){
               cout << s.size() - i << endl;
               ok = false;
               break;
            }
            
        }
        else{
            a[0]--;
            if(a[0] < 0){
                cout << s.size() - i << endl; 
                ok = false;
                break;
            }
            
        }
    }
    if(ok){
        cout << 0 << endl; 
    }
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