#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>v(n-1);
        int sum=0;
        for (long long i = 0; i < n-1; i++)
        {
            /* code */
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<long long>a(n);
        a[0]=2;
        for (long long i = 1; i < n; i++)
        {
            /* code */
            a[i]=v[i-1]-a[i-1];
        }
        for (long long i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}