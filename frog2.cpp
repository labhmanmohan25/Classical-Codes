#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
const int INF=1e9+5;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> h(n);
    for(int& x:h)
    {
        cin>>x;
    }
    vector<int> dp(n,INF);
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=i+k;j++)
        {
            if(j<n)
            {
                dp[j]=min(dp[j],dp[i]+abs(h[i]-h[j]));
 
            }
        }
    }
    cout<<dp[n-1];
	return 0;
}
