#include<bits/stdc++.h>
using namespace std;
void fun()
{
    int n;
    cin>>n;
    cout<<2<<endl;
    int a=n,b=n-1;
    for(int i=1;i<n;i++)
    {
        cout<<a<<" "<<b<<endl;
        a=(a+b+1)/2;
        b--;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }
    return 0;
}