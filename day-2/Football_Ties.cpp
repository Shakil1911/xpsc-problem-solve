#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y;
    while(n--)
    {
        cin>>x>>y;
        int s=x%3;
        int a=y%3;
        if(x%3==0 && y%3==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}