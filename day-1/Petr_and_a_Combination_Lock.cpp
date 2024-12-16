#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int>a(x);
    bool flag=false;
    for(int j=0;j<x;j++)
    {
        cin>>a[j];
    }
    for(int mask=0;mask<(1<<x);mask++)
    {
        int sum=0;
        for(int k=0;k<x;k++)
        {
            if((mask>>k)& 1)
            {
                sum+=a[k];
            }
            else
            {
                sum-=a[k];
            }
        }
        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}