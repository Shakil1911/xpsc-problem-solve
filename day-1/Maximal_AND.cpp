#include<bits/stdc++.h>
using namespace std;
const int B=30;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>bits(B+1);
        for(int i=0;i<n;i++)
        {
            for(int k=B;k>=0;k--)
            {
                if((v[i]>>k)& 1)
                {
                    bits[k]++;
                }
            }
        }
        long long ans=0;
        for(int k=B;k>=0;k--)
        {
            if(bits[k]==n)
            {
                ans+=(1LL<<k);
            }
            else
            {
                int need=n - bits[k];
                if(m>=need)
                {
                    ans+=(1LL<<k);
                    m-=need;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}