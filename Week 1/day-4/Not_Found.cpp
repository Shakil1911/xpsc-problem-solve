#include<bits/stdc++.h>
using namespace std;
char fun(string x)
{
    set<char>t;
    for(char c : x)
    {
        t.insert(c);
    }
    for(char i='a';i<='z';i++)
    {
        if(t.find(i)==t.end())
        {
            return i;
        }
    }
    return '\0';
}
int main()
{
    string s;
    cin>>s;
    char result=fun(s);
    if(result=='\0')
    {
        cout<<"None"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    return 0;
}