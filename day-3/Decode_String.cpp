#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector<char>v;
        for(int i=s.length()-1;i>=0;i--)
        {
            if (s[i]-48==0)
            {
                int x=s[i-1]-48;
                int y=s[i-2]-48;
                y=y*10+x;
                char a=y+96;
                v.push_back(a);
                i=i-2;
            }
            else
            {
                int e=s[i]-48;
                char d=e+96;
                v.push_back(d);
            }
        }
        reverse(v.begin(),v.end());
        for(char val:v)
        {
            cout<<val;
        }
        cout<<endl;
    }
    return 0;
}