#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]){
            cnt++;
            if(cnt == 7){
                break;
            }
        }
        else cnt = 1;
    }
    if (cnt >= 7){
            cout << "YES";
        }
        else cout << "NO";
    return 0;
}