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
ll lcm(ll a, ll b) {
    return (a*b)/gcd(a, b);
}

int main(){
    ll n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }
    ll g = gcd(v[0], v[1]);
    for(ll i = 1; i < n; i++){
        for(ll j=i+1; j < n;j++){
            g = gcd(g, lcm(v[i], v[j]));
        }
    }

    return 0;
}
