#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>> a >> b >> c;
    int d=((a+b)/2)/c;
    int x=c*d;
    int y=c*(d+1);
    if(x>=a && b>=x)
    {
        cout<<(c*d)<<endl;
    }
    else if(y>=a && b>=y)
    {
        cout<<y<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}