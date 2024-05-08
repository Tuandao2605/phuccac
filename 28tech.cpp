#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    string s;
    cin>>s;
    int n = s.length ();
    s = "0" + s;
    int base = 1e7 +9;
    ll F[n+1] = {0};
    int d[256] = {0};
    for (int i = 1; i <= n;i++)
    {
        d[s[i]]++;
        int num1 = d['8'] -d['2'];
        int num2 = d['t'] -d['8'];
        ll encode = num1*base + num2;
        F[i] = encode;
    }
    map<ll,int> mp;
    mp[0] = 1;
    ll cnt = 0;
    for (int i = 1; i<=n; i++)
    {
        cnt += mp[F[i]];
        mp[F[i]]++;
    }
    cout<<cnt<<endl;
}