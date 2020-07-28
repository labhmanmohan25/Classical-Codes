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
        ll n,cnt,temp=-1;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cnt=0;
            if(a[i]<=a[i+1])
            {

            }
            else
            {
                ll p=0;
                do
                {
                     a[i+1]=a[i+1]+pow(2,p);
                     cnt++;
                     p++;
                }
                while(a[i+1]<=a[i]);
            }
            temp=max(temp, cnt);
        }
        cout<<temp<<"\n\n";
    }
    return 0;
}
