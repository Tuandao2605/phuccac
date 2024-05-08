#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1000000007;
ll pow1(ll a , ll b, ll c){
    ll sum = 1;
    while(b){
        if(b % 2 == 1)
        sum *= a, sum %= c;
        a *=a, a %= c;
        b /= 2;
    }
    return sum;
}
    ll n;
    ll b[200003];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1 ; i <= n; i++){
        int m; cin >> m;
        b[m]++;
    }
    ll somu = 1;
    for(int i = 1 ; i <= 200000 ; i++){
        if(b[i]){
            somu  = (somu *(b[i] + 1))% (2*M-2);
        }
    }
    ll dapan = 1;
    for(int i = 1 ; i <= 200000; i++){
        if(b[i]){
        dapan = (dapan * pow1(i,b[i]*somu/2,M))%M;
        }
    }
    cout << dapan;
    return 0;
}   