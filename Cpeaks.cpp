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
        ll n, m;
        cin>>n>>m;
        vector<ll> h(n), v(n, 1);
        for(ll i=0; i<n; i++){
            cin>>h[i];
        }
//        print_vector1(h);
//        print_vector1(v);
        for(ll i=0; i<m; i++){
            ll a, b;
            cin>>a>>b;
            if(h[a-1] < h[b-1]){
                v[a-1] = 0;
            }
            else if(h[a-1] > h[b-1]){
                v[b-1] = 0;
            }
            else{
                v[a-1] = 0;
                v[b-1] = 0;
            }
        }
//        print_vector1(v);
        cout<<accumulate(v.begin(), v.end(), 0);

    return 0;
}
