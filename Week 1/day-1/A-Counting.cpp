#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m>=n)
    {
        cout<<m-n+1<<endl;
    }else
    {
        cout<<"0"<<endl;
    }
    return 0;
}