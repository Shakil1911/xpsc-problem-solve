#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    set<string>l;
    string k;
    for(int i=1;i<=n;i++)
    {
        cin>> k;
        if(l.find(k) !=l.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            l.insert(k);
        }
    }
    return 0;
}