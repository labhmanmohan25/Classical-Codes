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
    while(t--){
        ll n;
        cin>>n;
        vector<ll> height;
        ll cnt = 0;
        ll sum = 0;
        ll num = 1;
        if(n < 2){
            cout<<"0"<<"\n";
            continue;
        }
        while(sum < n){
            sum = sum + (num * 2) + cnt;
            if(sum > n){
                break;
            }
            height.push_back(sum);
            cnt++;
            num++;
        }

        ll tri = 0;
        ll i = height.size() - 1;
        while(i >= 0){
            if(n - height[i] >= 0){
                n = n - height[i];
                tri++;
            }
            i--;
        }
        cout<<tri<<"\n";

    }
    return 0;
}
