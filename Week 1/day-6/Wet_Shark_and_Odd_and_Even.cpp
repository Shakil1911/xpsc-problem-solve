#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> x(n);
    long long sum=0,a;
    long long mn_odd=INT_MAX;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        sum+=x[i];
        if(x[i]%2!=0)
        {
            mn_odd=min(x[i],mn_odd);
        }
    }if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-mn_odd<<endl;
    }
    return 0;
}