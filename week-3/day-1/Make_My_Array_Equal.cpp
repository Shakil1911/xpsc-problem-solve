#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            {
                mp[a[i]]++;
            }
        }
        if(mp.size()==1||mp.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}