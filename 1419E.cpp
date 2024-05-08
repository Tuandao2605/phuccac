#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n+1,0);
        for(int i = 2; i <= n/2 ; i++){
            if(n % i == 0){
                a.push_back(i);
            }
        }
        
    }
}