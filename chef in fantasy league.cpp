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

int main(){
    ll t;
    cin>>t;
    while (t--){
        ll n, s;
        cin>>n>>s;
        ll r = 100 - s;
        ll v[2][n];
        ll def = 1000, frw = 1000;
        for(ll i = 0; i < n; i++){
            cin>>v[0][i];
        }
        for(ll i = 0; i < n; i++){
            cin>>v[1][i];
            if(v[1][i]==0){
                def = min(def, v[0][i]);
            }
            else{
                frw = min(frw, v[0][i]);
            }
        }
        if(frw + def <= r){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }

    }

    return 0;
}
