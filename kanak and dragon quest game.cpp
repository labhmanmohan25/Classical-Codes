#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
using ll = long long;
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n,m,cnt1=0,cnt2=0;
        cin>>x>>n>>m;
        if(x>20)
        {
           for(ll i=0;i<n;i++)
        {
            x=floor(x/2)+10;

        }

        for(ll i=0;i<m;i++)
        {
            x=x-10;
            cnt2++;
        }
        }
        else
        {
            for(ll i=0;i<m;i++)
        {
            x=x-10;
            cnt2++;
        }
        }

        if(x<=0)
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
