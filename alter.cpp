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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n+1,0);
        for(ll i=0;i<n-1;i++){
                ll temp1,temp2;
            cin>>temp1>>temp2;
            v[temp1]=v[temp1]+1;
            v[temp2]=v[temp2]+1;
        }
        ll i=0;
        while(k){
            if(v[i%(n+1)]==i/n+1){
                v[i%(n+1)]=0;
                    k--;
            }
        }
        cout<<accumulate(v.begin(), v.end(), 0);
    return 0;
}
