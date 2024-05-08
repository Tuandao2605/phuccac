#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x;
    cin >> n >> x;
    ll a[x], b[n + 1],c[n];
    a[0] = 0;
    int cnt = n;
    for(int i = 0; i < x; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        c[i] = 0;
    }
    b[0] = 0;
    for(int i = 0; i < x - 1; i++){
        if(a[i] == a[i+1]) continue;
        int x,y;
        x = max(a[i], a[i+1]);
        y = min(a[i], a[i+1]);
        c[0]+= x - y;
        c[y-1] += y - 1;
        c[y] -= y;
        c[x-1] -= x-1+2*y;
        if(x!=n) c[x]+= x - 2*y;
    }
    for(int i = 0 ; i < n ; i++){
        b[i+1] = b[i] + c[i];
    }
    for(int i = 0; i < n; i++){
        cout << b[i+1] << " ";
    }
}