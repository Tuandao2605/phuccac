
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int INF = 1e18;
const int N = 2e5+5;
int n;
int a[N]; 
int sol1(){
   int sum = 0 , cur = 0;
   for(int i = 0; i < n; i++){
      if(a[i] > a[(i+1)%n]){
         sum++; cur = i + 1;
      }
   }
   if(sum > 1) return INT_MAX;
   if(sum == 0) return 0;
   return min(n-cur,cur+2);
}
int sol2(){
   reverse(a,a+n);
   int sum = 0 , cur = 0;
   for(int i = 0; i < n; i++){
      if(a[i] > a[(i+1)%n]){
         sum++; cur = i + 1;
      }
   }
   if(sum > 1) return INT_MAX;
   if(sum == 0) return 0;
   return min(n-cur+1,cur+1);
}
void solve()
{
   cin >> n;
   for(int i = 0 ; i < n ;i++){
      cin >> a[i];
   }
   int x = sol1();
   int y = sol2();
   cout << (min(x,y) == INT_MAX ?-1 : min(x,y)) << endl;
}

signed main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int test;
   cin >> test;
   while (test--)
      solve();
   return 0;
}