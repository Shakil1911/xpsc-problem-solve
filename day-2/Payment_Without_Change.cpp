#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    long long a,b,n,s;
    while(x--)
    {
        cin>>a>>b>>n>>s;
        long long min_x=min(a,s/n);
        long long q=s-min_x*n;
        if(q<=b)
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