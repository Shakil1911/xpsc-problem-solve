#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& a, int k) {
        // code here
        int l=0,r=0;
        int n=a.size();
        long long int ans=0,sum=0;
        while(r<n)
        {
            sum+=a[r];
            if(r-l+1==k)
            {
                ans=max(ans,sum);
                sum-=a[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};