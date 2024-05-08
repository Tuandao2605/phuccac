#include <bits/stdc++.h>
typedef long long  = ll;
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k ; cin >> k;
        ll sum;
        ll sumg = 0;
        if(n >= 3){
            if(n % 2 == 0){
                sum = (n/2)*(n/2-1);
                sumg += n/2;
            }
            else sum = (n/2-1)*(n/2-1);
            sum += n/2 - 1;
        }
        
    }
}