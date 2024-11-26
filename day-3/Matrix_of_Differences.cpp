#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=1;
        int y=n*n;
        vector<int>s;
        for(int i=1;i<=n*n;i++)
        {
            if(i%2==1)
            {
                s.push_back(x);
                x++;
            }
            else
            {
                s.push_back(y);
                y--;
            }
        }
        x=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                for(int j=x;j<x+n;j++)
                {
                    cout<<s[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
            else
            {
                for(int j=(n+x)-1;j>=x;j--)
                {
                    cout<<s[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
        }
    }
    return 0;
}