#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    string s;
    while(n--)
    {
        cin>>x>>s;
        int one=0,zero=0;
        char current=s[0];
        if(current=='0')
        {
            zero++;
        }
        else one++;
        for(int r=1;r<x;r++)
        {
            if(s[r]!=current)
            {
                current=s[r];
                if(current=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
                
            }
        }
        cout<<min(one,zero)<<endl;
    }
    return 0;
}