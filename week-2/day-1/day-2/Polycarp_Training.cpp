#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int>ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    int ans=0,p=1;
    while(!ms.empty())
    {
        auto it=ms.lower_bound(p);
        if(it!=ms.end())
        {
            ans++;
            ms.erase(it);
        }
        else
        {
            break;
        }
        p++;
    }
    cout<<ans<<endl;
    return 0;
}