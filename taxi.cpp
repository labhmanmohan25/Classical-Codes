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

int main(){
    ll n;
    cin>>n;
    vector<ll> v(5, 0);
    ll taxi = 0;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin>>temp;
        v[(temp % 5)]++;
    }
    taxi = taxi + v[4]; v[4] = 0;
    taxi = taxi + (v[2] / 2); v[2] = v[2] % 2;
    ll temp = min(v[1], v[3]);
    taxi = taxi + temp; v[1] = v[1] - temp;
    v[3] = v[3] - temp;
    if(v[1] == 0){
        taxi = taxi + v[2] + v[3];
    }
    else{
        if(v[2] != 0){
            taxi++;
            v[1] = v[1] - 2;
        }
        if(v[1] > 0){
            taxi = taxi + (v[1] / 4);
            v[1] = v[1] % 4;
            if(v[1] > 0){
                taxi++;
            }
        }
    }
    cout<<taxi;

    return 0;
}
