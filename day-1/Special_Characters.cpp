#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long a=n/2;
        cout<<"YES"<<endl;
        for(int i=1;i<=a;i++)
        {
            if(i%2!=0)
            {
                cout<<"AA";
            }
            else
            {
                cout<<"BB";
            }
            
        }
        cout<<endl;
    }
    return 0;
}