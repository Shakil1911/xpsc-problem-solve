#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[m];
    for (int i = 0; i <m; i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    long long ans=0;
    while(r<m && l<n)
    {
        int cnt1=0,cnt2=0;
        int curr=a[l];
        while(l<n && a[l]==curr)
        {
            l++;
            cnt1++;
        }
        while(r<m && b[r]<curr)
        {
            r++;
        }
        while(r<m && b[r]==curr)
        {
            r++;
            cnt2++;
        }
        
        ans+=1ll*cnt1*cnt2;
    }
    cout<<ans<<endl;
    return 0;
}