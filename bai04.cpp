#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a[100];
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        sum += abs(a[i]);
    }
    cout << sum;
    return 0;
}