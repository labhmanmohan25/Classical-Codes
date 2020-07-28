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
    ll n,t,sum=0;
    cin>>n;
    ll a[1001]={0};
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a[temp]++;
    }
    cin>>t;
    for(ll i=0;i<=1000-t+1;i++){
        if(a[i]){
                ll temp = 0;
            for(ll j=0;j<=t ;j++){
                temp = temp + a[i + j];
            }
            sum=max(sum,temp);
        }
    }

    cout<<sum;

    return 0;
}
