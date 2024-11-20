#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long m;
    cin>>n>>m;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long ans=0;
    multiset<long long>ml;
    long long mn,mx;
    while(r<n)
    {
        ml.insert(a[r]);
        mn=*ml.begin();
        mx=*ml.rbegin();
        if(mx-mn<=m)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<=r)
            {
                mn=*ml.begin();
                mx=*ml.rbegin();
                if(mx-mn<=m)
                {
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn=*ml.begin();
            mx=*ml.rbegin();
            if(mx-mn<=m)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}