#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string,bool>m;
    int n;
    cin>>n;
    string s[n];
        for(int i = 0; i <n; i++)
        {
            cin>>s[i];
        }
        for(int i= n-1; i >=0; i--)
        {
            if(m[s[i]]!=true )
            {
                cout<<s[i]<<endl; 
                m[s[i]]=true;
            }
        }
        return 0;   
}