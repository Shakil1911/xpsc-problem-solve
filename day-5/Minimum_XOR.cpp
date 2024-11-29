#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        vector<int>v(t);
        int XOR=0;
        for(int i=0;i<t;i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }
        int ans=XOR;
        for(int i=0;i<t;i++)
        {
            int current=XOR^v[i];
            ans=min(ans,current);
        }
        cout<<ans<<endl;
    }
    return 0;
}