#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        vector<char>v(x);
        vector<char>v1(x);
        for(int i=0;i<x;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<x;i++)
        {
            cin>>v1[i];
        }
        bool a=true;
        for(int i=0;i<x;i++)
        {
            if((v[i]=='R' && v1[i]!='R')||(v[i]!='R' && v1[i]=='R'))
            {
                a=false;
            }
        }
        if(a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}