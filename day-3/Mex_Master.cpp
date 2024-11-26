#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long zero=0;
        long long nonzero=0;
        for(long long i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                nonzero++;
            }
            else
            {
                zero++;
            }
        }
        int ans;

        if(zero==0)
        {
            ans=0;
        }
        else
        {
            if(nonzero>=zero-1)
            {
                ans=0;
            }
            else
            {
                int mx=*max_element(v.begin(),v.end());
                {
                    if(mx==1)
                    {
                        ans=2;
                    }
                    else
                    {
                        ans=1;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}