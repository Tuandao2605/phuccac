#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int demsnt(int n){
    int cnt = 0;
    int cur = 0;
    while(n > 0){
        cur = n % 10;
        if((cur == 2)||(cur == 3)||(cur == 5)|| (cur == 7)){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool xepsnt(int a, int b){
        return demsnt(a) > demsnt(b);
}
int n;
int main(){
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    stable_sort(a, a + n, xepsnt);
    for (auto it : a){
        cout << it << ' ';
    }
    return 0;
}