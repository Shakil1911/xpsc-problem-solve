#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>ans;
    string a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ans[b]=a;
    }
    for(int i=0;i<m;i++)
    {
        string com,ip;
        cin>>com>>ip;

        ip.erase(ip.end()-1);
        if(ans.find(ip)!=ans.end())
        {
            string s=ans[ip];
            cout<<com<<" "<<ip<<"; #"<<s<<endl;
        }
        else
        {
            cout<<com<<" "<<ip<<";"<<endl;
        }
    }
    return 0;
}