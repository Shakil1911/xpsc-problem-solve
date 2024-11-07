#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        multiset<long long>s;
        long long x;
        long long sum=0;
        long long a;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(!s.empty() && x==0)
            {
                a=*s.rbegin();
                sum+=a;
                auto it=s.find(a);
                s.erase(it);
            }
            if(x>0)
            {
                s.insert(x);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}