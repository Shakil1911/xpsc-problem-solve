#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        map<char,int>mp;
        string c;
        cin>>c;
        for(int i=0;i<c.size();i++)
        {
            mp[c[i]]++;
        }
        int q=0;
        for(char i='a';i<='z';i++)
        {
            if(mp[i]%2!=0)
            {
                q++;
            }
        }

        if(q>k+1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}