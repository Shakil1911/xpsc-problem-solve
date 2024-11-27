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
        string s="#";
        for(int i=0;i<n;i++)
        {
            s+="BAN";
        }
        vector<pair<int,int>>ans;
        int m=s.size()-1;
        int l=2,r=m;
        while(l<r)
        {
            swap(s[l],s[r]);
            ans.push_back({l,r});
            l+=3;
            r-=3;
        }
        cout<<ans.size()<<endl;
        for(auto v : ans)
        {
            cout<<v.first<<" "<<v.second<<endl;
        }
    }
    return 0;
}