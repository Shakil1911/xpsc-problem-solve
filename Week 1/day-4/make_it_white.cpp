#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        
            string s;
            cin>>s;

            int firstpos=-1;
            int lastpos=-1;
            firstpos =s.find('B');
            lastpos=s.rfind('B');
            int q=(lastpos-firstpos)+1;
            cout<<q<<endl;
    }
    return 0;
}