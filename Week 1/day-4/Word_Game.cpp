#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,m=3;
        cin>>t;
        map<string,vector<int>>mp;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=t;j++)
            {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int>ans(m+1);
        for(auto val : mp)
        {
            string x=val.first;
            vector<int>v=val.second;
            if(v.size()==1)
            {
                ans[v[0]]==3;
            }
            if(v.size()==2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for(int i=1;i<=m;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}