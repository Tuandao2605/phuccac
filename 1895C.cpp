#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

#define int long long

const int INF = 1e18;
void solve()
{
    int n ; cin >> n;
    int ans = 0;
    char a[n][5],b[n][5],c[n][5];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(strlen(a[i]) % 2 == 0){
            strcpy(b[i],a[i]);
        }
        else strcpy(c[i],a[i]);
    }
    for(auto x : b){
        int cnt;
        for(int i = 0 ; i <= strlen(b[i])/2 - 1; i++){
            cnt += (int)(b[i]) - (int)b[i + strlen(b[i])/2];  
        }
        if(cnt == 0){
            ans++;
        }
    }
    for(int  i = 0 ; i < n ; i++){
        char s[10] = {};
        int cnt = 0;
        for(int  j = i + 1; j < n ; j++){
            if(!b[i] || !b[j]) continue;
            strcpy(s,b[i]);
            strcat(s,b[j]);
            for(int k = 0 ; k <= strlen(s)/2 - 1; k++){
            cnt += (int)(s[k]) - (int)s[k+strlen(s)/2];  
            }
            if(cnt == 0){
            ans++;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        char s[10] = {};
        int cnt = 0;
        for(int j = i + 1; j < n ; j++){
            strcpy(s,c[i]);
            strcat(s,c[j]);
            for(int k = 0 ; k <= strlen(s)/2 - 1; k++){
            cnt += (int)(s[k]) - (int)s[k+strlen(s)/2];  
            }
            if(cnt == 0){
            ans++;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}