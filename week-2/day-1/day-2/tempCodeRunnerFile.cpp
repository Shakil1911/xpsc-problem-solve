#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<int,set<int>>mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x].insert(i);
    }
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int startingindexleft=*mp[l].begin();
            int endingindexright=*mp[r].rbegin();

            if(startingindexleft<endingindexright)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}