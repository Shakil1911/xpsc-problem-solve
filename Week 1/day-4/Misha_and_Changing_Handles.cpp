#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,string>ans,has;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;

        if(has.find(a)!=has.end())
        {
            string s=has[a];
            ans [s]=b;
            has.erase(a);
            has[b]=s;
        }
        else
        {
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<ans.size()<<endl;
    for(auto q : ans)
    {
        cout<<q.first<<" "<<q.second<<endl;
    }
    return 0;
}