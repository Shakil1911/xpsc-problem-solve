#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        if(a!=x)
        {
            v.push_back(a);
        }
    }
    for(auto q : v)
    {
        cout<<q<<" ";
    }
    return 0;
}