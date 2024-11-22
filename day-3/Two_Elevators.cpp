#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;

        long long x=abs(a-1);
        long long y=abs(b-c)+abs(c-1);
        if(y==x)
        {
            cout<<3<<endl;
        }
        else if(x>y)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}