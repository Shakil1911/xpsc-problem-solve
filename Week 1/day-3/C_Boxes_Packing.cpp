#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    map<long long,long long>countt;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        countt[a[i]]++;
    }
    long long d=0;
    for(auto p :countt)
    {
        d=max(d , p.second);
    }
    cout<<d<<endl;
    return 0;
}