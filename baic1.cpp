#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 1; i <= n ; i++){
            cin >> a[i];
        }
        int max = a[1];
        int sum = a[1];
        if(a[1] < 0 ){
            sum = 0;
        }
        for(int i = 2; i <= n; i++){
            if(abs(a[i]-a[i-1]) % 2 == 1){
            if(sum < 0){
                sum = a[i];
            }
            else sum += a[i];
            }
            else sum = a[i];
            if(max < sum){
                max = sum;
            }
        }
        cout << max << endl;
    }
}