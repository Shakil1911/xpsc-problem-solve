#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string target={"Timur"};
    sort(target.begin(),target.end());
    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s.size()!=5)
        {
            cout<<"NO"<<endl;
        }
        else if(s==target)
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