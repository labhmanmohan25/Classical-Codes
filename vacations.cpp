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
    vector<int> dp(3);
    for(int day=0;day<n;day++)
    {
        vector<int> new_dp(3,0 );
        vector<int> c(3);
        for(int i=0;i<3;i++)
        {
            cin>>c[i];
        }

        for(int i=0;i<3;++i)
        {
            for(int j=0;j<3;j++)
            { 
                if(i!=j)
                {
                    new_dp[j]=max(new_dp[j],dp[i]+c[j]);
                }
            }
        }
        dp=new_dp;
    }
    cout<<max({dp[0],dp[1],dp[2]}) ;
	return 0;
}
