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
        ll n0,n1,n2;
        cin>>n0>>n1>>n2;
        if(n0 != 0){
            for(ll i = 0; i < n0; i++){
                cout<<"0";
            }
            if(n1 == 0){
                cout<<"0";
            }
        }
        for(ll i = 0; i< n1; i++){
            cout<<"01";
        }
        if(n2 != 0){
            for(ll i = 0; i < n2; i++){
                cout<<"1";
            }
            if(n1 == 0){
                cout<<"1";
            }
        }

        cout<<"\n";

	}
    return 0;
}
