#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	deque<int>dq(n);
	for(int i=0;i<n;i++)
	{
		cin>>dq[i];
	}
	int sereja=0;
	int dema=0;
	int who=1;
	while(!dq.empty())
	{
		int left=dq.front();
		int right=dq.back(),mx;
		mx=max(left,right);
		if(who%2!=0)
		{
			sereja+=mx;
		}
		else
		{
			dema+=mx;
		}
		if(mx==dq.front())
		{
			dq.pop_front();
		}
		else
		{
			dq.pop_back();
		}
		who++;
	}
	cout<<sereja<<" "<<dema<<endl;

	return 0;
}