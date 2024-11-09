#include<bits/stdc++.h>
using namespace std;
void fun()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<long long>teacher(m);
    for(int i=0;i<m;i++)
    {
        cin>>teacher[i];
    }
    sort(teacher.begin(),teacher.end());
    while(q--)
    {
        int david;
        cin>>david;
        if(david<teacher[0])
        {
            cout<<teacher[0]-1<<endl;
            continue;
        }
        else if(david>teacher[m-1])
        {
            cout<<n-teacher[m-1]<<endl;
            continue;
        }
        auto it=lower_bound(teacher.begin(),teacher.end(),david);
        auto jt=it;
        jt--;
        int left=*jt,right=*it;
        int mid=(left+right)/2;
        cout<<max(abs(mid-left),abs(mid-right));
        cout<<endl;
    }   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }return 0;
}