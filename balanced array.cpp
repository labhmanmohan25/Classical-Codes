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

void print_arr1(ll a[], ll n){
    for(ll i=0; i<n ;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
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
        ll a[n];
        ll e=0, o=n/2, sume = 0, sumo =0;

        if(o % 2){
            cout<<"NO"<<"\n";
            continue;
        }
        else{
            cout<<"YES"<<"\n";
        }

        for(ll i=1; i<=n; i++){
            if(i % 2 == 0){
                a[e] = i;
                e++;
                sume = sume + i;
            }
            else{
                a[o] = i;
                o++;
                sumo = sumo + i;
            }
        }
        sumo = sumo - a[n-1];
        a[n-1] = sume - sumo;

        print_arr1(a, n);
    }

    return 0;
}
