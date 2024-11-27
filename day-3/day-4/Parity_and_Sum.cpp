#include<bits/stdc++.h>
using namespace std;
long long f(vector<long long>&even,vector<long long>&odd)
{
    long long e=even.size();
    long long o=odd.size();
    long long mx=odd.back();
    long long ans=0;
    for(long long i=0;i<e;i++)
    {
        if(mx<even[i])
        {
            return (e+1);
        }
        else
        {
            ans++;
            mx+=even[i];
        }
    }
    return ans;
}
void fun()
{
    long long n;
        
        cin>>n;
        long long x;
        vector<long long>even,odd;
        for (long long i = 0; i <n; i++)
        {
            /* code */
            cin>>x;
            if(x%2)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
        }

        if(even.size()==0 || odd.size()==0)
        {
            cout<<"0"<<endl;
            return;
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        long long an=f(even,odd);
        cout<<an<<endl;
    
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