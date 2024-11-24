#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cout<<i<<" ";
        }
        for(int i=n;i>m;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}