#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=a-i;j++)
        {
            int k=a-i-j;
            for(int p=0;p<=k;p++)
            {
                if(i*j*p<=b)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}