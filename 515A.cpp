#include <iostream>
using namespace std;
int main(){
    int a,b,s;
    cin >> a >> b >> s;
    if(((s-abs(a)-abs(b)) % 2 == 0) && (s-abs(a)-abs(b)) >= 0){
        cout << "YES";
    }
    else 
    cout << "NO";
    return 0;
}