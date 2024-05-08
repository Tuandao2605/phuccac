#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100005;
int a[N],b[N],cnt[N];
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        int n; cin >> n;
        for(int i = 0; i < 100000; i++){
        cnt[i] = 0;
        }
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n;i += 2){
            cnt[a[i]]++;
            cnt[b[i]]--;
        }
        bool flag = true;
        for(int i = 1; i <= 100000; i++){
            if(cnt[i]){
                flag = false ;
                break;
            }
        }
        if(flag == true){
            cout << "YES";
        }
        else cout << "NO";
        cout << endl;
    }
    return 0;
}