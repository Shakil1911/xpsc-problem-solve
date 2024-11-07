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
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int b;
        for(int j=0;j<n;j++)
        {
            cin>>b;
            char c[b];
            int q=a[j];
            vector<int>v={0,1,2,3,4,5,6,7,8,9};
            for(int k=0;k<b;k++)
            {
                cin>>c[k];
                if(c[k]=='D')
                {
                    q++;
                }
                else
                {
                    q--;
                }
            }
            if(q>9)
            {
                cout<<v[q-10]<<" ";
            }
            else if(q<0)
            {
                cout<<v[q+10]<<" ";
            }
            else
            {
                cout<<v[q]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}