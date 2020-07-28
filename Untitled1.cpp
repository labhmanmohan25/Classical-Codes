#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
const int INF = 1e9 + 5;
const int MOD = 1000000007;
const int MAX = 10000005;
const double PI = acos(-1.0);
#define pb push_back
#define vll vector<long long int>
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define       ll         long long
#define       ull        unsigned long long
#define       pii        pair <ll,ll>
#define       mii        map <ll,ll>
#define       msi        map <string,ll>
#define       pb         push_back
#define       nl         "\n"
#define       sp         " "

ll sumDigits(ll n)
 {

    int sum = 0;
    while (n != 0)
    {
     sum = sum + n % 10;
     n = n/10;
    }
 return sum;
 }

int main()
{
    FastIO;

    ll t;
    cin>>t;
    while(t--)
    {
		ll k;
		cin>>k;
		char a[8][8];

		for(ll i=0;i<8;i++)
        {
            for(ll j=0;j<8;j++)
            {
                a[i][j]='X';
            }
        }

        for(ll i=0;i<8;i++)
        {
            for(ll j=0;j<8;j++)
            {
                k--;
                if(k>-1)
                {
                    a[i][j]='.';
                }
                else
                    break;
            }
        }
        a[0][0]='0';
        for(ll i=0;i<8;i++)
        {
            for(ll j=0;j<8;j++)
            {
                cout<<a[i][j];
            }
            cout<<nl;
        }
		cout<<nl;
	}

    return 0;
}
