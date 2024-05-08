#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1000001];
int chatnhiphan(int k, int a ,int b){
    while(a <= b){
        int mid = (a + b)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] > k){
            b = mid - 1;
        }
        else a = mid + 1;    
    }
    return -1;
}
int main(){
    cin >> n;
    int k; cin >> k;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int p = chatnhiphan(k, 1, n);
    cout << p;
    return 0;
}