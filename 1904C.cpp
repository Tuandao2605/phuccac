#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long minn=2e18;
        int n,k;
        cin >>n>>k;
        vector<long long> a(n,0);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        if(k>=3)
        {
            cout << 0 << endl;
        }
        else if(k==1)
        {
            for(int i=0;i<n-1;i++)
            {
                minn=min(minn,a[i]);
                for(int j=i+1;j<n;j++)
                {
                    minn=min(abs(a[i]-a[j]),minn);
                }
            }
            minn=min(minn,a[n-1]);
            cout << minn << endl;
        }
        else
        {
            
            vector<long long> cac;
            for(int i=0;i<n;i++)
            {
                minn=min(minn,a[i]);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    minn=min(minn,abs(a[i]-a[j]));
                    cac.push_back(abs(a[i]-a[j]));
                }
            }
            sort(a.begin(),a.end());
            for(int i = 0 ; i < cac.size(); i++){
                long long pos = lower_bound(a.begin(),a.end(),cac[i]) - a.begin();
                if(pos == 0){
                    minn = min(minn,abs(a[0] - cac[i]));
                }
                else
                minn = min({minn,abs(cac[i]-a[pos-1]),abs(cac[i]-a[pos])});
            }
            cout << minn << endl;
        }
    }
}