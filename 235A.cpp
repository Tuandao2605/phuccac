#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n; cin >> n;
    ll s1 = (n-1)*(n-2)*(n-3);
    ll s2 = n*(n-1)*(n-2);
    ll s3 = n*(n-1)*(n-3);
    if(n <= 2){
        cout << n; 
    }
    else if(n % 6 == 0){
        cout << s1;
    }
    else if (n % 2 == 1){
        cout << s2;
    }
    else cout << s3;
    
    return 0;
}