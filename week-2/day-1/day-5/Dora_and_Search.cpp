#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        int l=1,r=n;
        int i=1,j=n;
        int x=-1,y=-1;
        while(l<r)
        {
            bool a=true,b=true;
            if(v[l]==i || v[l]==j)
            {a=false;

                if(v[l]==i)
                {
                    i++;
                    l++;
                }
                else if(v[l]==j)
                {
                    l++;
                    j--;
                }
            }
            if(v[r]==i || v[r]==j)
            {
                b=false;
                if(v[r]==i)
                {
                    i++;
                    r--;
                }
                else if(v[r]==j)
                {
                    j--;
                    r--;
                }
            }
            if(a&&b)
            {
                x=l,y=r;
                break;
            }
        }
        if(x==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}