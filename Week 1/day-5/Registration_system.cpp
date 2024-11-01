#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string>v(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(mp.find(v[i])==mp.end())
        {
            mp[v[i]]=0;
            cout<<"OK"<<endl;
        }
        else
        {
            mp[v[i]]++;
            cout<<v[i]<<mp[v[i]]<<endl;
        }
    }
    return 0;
}