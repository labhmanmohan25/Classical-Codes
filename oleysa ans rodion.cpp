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

ll countDigit(long long n)
{
    return floor(log10(n) + 1);
}

int main(){
    ll n, t;
    cin>>n>>t;
    if(n == countDigit(t)){
        cout<<t;
    }
    else if(n > countDigit(t)){
        if(t < 10){
            for(ll i = 0; i < n; i++){
                cout<<t;
            }
        }
        else{
            cout<<1;
            for(ll i = 0; i < n - 1; i++){
                cout<<0;
            }
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
