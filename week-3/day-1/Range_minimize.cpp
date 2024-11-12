#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
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
        sort(v.begin(),v.end());
        int mn=INT_MAX;
        if(v[n-1]-v[0]<mn)
        {
            mn=v[n-1]-v[0];
        }
        if(v[n-2]-v[0]<mn)
        {
            mn=v[n-2]-v[0];
        }
        if(v[n-3]-v[0]<mn)
        {
            mn=v[n-3]-v[0];
        }
        if(v[n-1]-v[1]<mn)
        {
            mn=v[n-1]-v[1];
        }
        if(v[n-1]-v[2]<mn)
        {
            mn=v[n-1]-v[2];
        }
        if(v[n-2]-v[0]<mn)
        {
            mn=v[n-2]-v[0];
        }
        if(v[n-2]-v[1]<mn)
        {
            mn=v[n-2]-v[1];
        }
        cout<<mn<<endl;
    }
    return 0;
}