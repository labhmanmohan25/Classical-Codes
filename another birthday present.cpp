#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
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



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,tp;
        cin>>n>>k;
        ll arr[n],brr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[i]=arr[i];
        }

        while(1){
                ll p = 0;
            for(ll i=0;i<n-k;i++)
            {
               if(arr[i]>arr[i+k])
                    {
                        tp=arr[i];
                        arr[i]=arr[i+k];
                        arr[i+k]=tp;
                        p++;
                    }
            }

            if(p == 0){
                break;
            }
        }

        ll c=0;
        sort(brr, brr+n);

        for(ll i=0;i<n;i++)
        {
            if(arr[i] != brr[i])
            {
                c++;
                break;
            }
        }

        if(c>0)
            cout<<"no"<<"\n";
        else
            cout<<"yes"<<"\n";

    }
return 0;
}
