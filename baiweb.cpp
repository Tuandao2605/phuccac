#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n , int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n; cin >> n;
    int a[10001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x ; cin >> x;
    cout << search(a,n,x);
    return 0;
}