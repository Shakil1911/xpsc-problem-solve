#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<string,string>,bool>mp;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        mp[{a, b}]=true;
    }
    // for(auto value : mp)
    // {
    //     pair<string,string>p=value.first;
    //     bool ok=value.second;
    //     cout<<p.first<<" "<<ok<<endl;
    //     cout<<value.first.first<<" "<<value.first.second;
    // }
    cout<<mp.size()<<endl;
    return 0;
}