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
        string s;
        cin>>s;
        int ans=n;
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]==s[r])
            {
                break;
            }
            else
            {
                ans=ans-2;
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}