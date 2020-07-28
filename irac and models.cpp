#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctype.h>
using namespace std;
using ll = long long;
const int INF = 1e9 + 5;

void print_vector2(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v){
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}

ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

vector<ll> countDivisors(ll n) {
    vector<ll> c;
    for (ll i = 1; i * i <= (n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                c.push_back(i);

            else{
                c.push_back(i);
                c.push_back(n / i);
            }

        }
    }
    return cnt;
}

void main()
{
	int t = 1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector arr(n+1);
		for(ll i=1, i <= n+1, i++)
		{
			cin>>arr[i];
		}
		vector dp(n+1,1);
		dp[1] = 1;
		for(ll i = 2;i<=n;i++)
		{
			vector facts;
			facts.push_back(1);
			for(int j = 2;j*j<=i;j++)
			{
				if(i%j == 0)
				{
					facts.push_back(j);
					facts.push_back(i/j);
				}
			}
			for(int j = 0;j<facts.size();j++)
			{
				if(arr[facts[j]]<arr[i])
				{
					dp[i] = max(dp[i],dp[facts[j]]+1);
				}
			}
		}
		ll ans = 0;
		for(ll i=1; i <= n+1; i++)
		{
			ans = max(ans,dp[i]);
		}
		cout<<ans<<"\n";


	}
}
