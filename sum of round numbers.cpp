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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        ll fac = 1, cnt = 0;
        while(n!=0){
            if(n%10 != 0){
                v.push_back((n%10)*fac);
                cnt++;
            }
            n=n/10;
            fac = fac*10;
        }
        cout<<cnt<<"\n";
        for(ll i= v.size()-1; i>=0; i--){
            if(v[i] != 0){
                cout<<v[i]<<" ";
            }
        }cout<<"\n";
    }
    return 0;
}
