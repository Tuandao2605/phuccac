#include <bits/stdc++.h>
#include <set>
using namespace std;
int demsole(int n){
    int cnt = 0;
    int cur = 0;
    while(n > 0){
        cur = n % 10;
        if(cur % 2 != 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool xeple(int a, int b){
    if(demsole(a) != demsole(b)){
        return demsole(a) < demsole(b);
    }
    else return a < b;
}
    int n;
int main(){
     cin >> n;
     int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, xeple);
    for(auto it : a){
        cout << it << ' ';
    }
    return 0;
}