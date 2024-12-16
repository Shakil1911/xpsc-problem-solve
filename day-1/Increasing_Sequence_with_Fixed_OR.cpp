#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        deque<long long>d;
        for(int i=0;i<=__lg(n);i++)
        {
            if((n>>i) &1)
            {
                long long val=n-(1LL<<i);
                if(val>0)
                {
                    d.push_front(val);
                }
            }
        }
        d.push_back(n);
        cout<<d.size()<<endl;
        for(auto v :d)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}