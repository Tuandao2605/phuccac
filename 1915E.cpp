#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define int long long


const int INF = 1e18;
// int n;
// int a[200005],prec[200005],prel[200005];
// int countprel(int l,int r){
//     return prel[r] - prel[l - 2];
// }
// int countprec(int l, int r){
//     return prec[r] - prel[l - 2];
// }

void solve()
{
    int n; cin >> n;
    bool ok = false;
    // memset(prel,0,sizeof(prel));
    // memset(prec,0,sizeof(prec));
    vector<int> a(n+1,0),sum(n+1,0);
    for(int i = 1 ; i <= n ;i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            sum[i] = sum[i-1] + a[i];
        }
        else sum[i] = sum[i-1] - a[i];
    }
    sort(sum.begin() + 1,sum.end());
    for(int i = 1; i < n ;i++){
        if(sum[i] == sum[i+1] || sum[i] == 0){
            ok = true; 
            break;
        }
    }
    if(sum[n] == 0){
        ok = true;
            
    }
    if(ok){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    // int l, r;
    // for(int i = 1; i <= n; i++){
    //     l = i ; r = n;
    //     while(l <= r){
    //         int mid = (l + r) >> 1;
    //         if(countprel(i,mid) == countprec(i,mid)){
    //             ok = true;
    //             break;
    //         }
    //         else if(countprel(i,mid) > countprec(i,mid)){
                
    //         }

    //     }
    // }

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
