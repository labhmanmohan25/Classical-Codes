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

ll largest(ll arr[], ll n)
{
    ll i;
    ll max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

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
        ll np=0, nn=0, pi=-1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                np++;
                    if(pi < 0){
                        pi = i;
                    }
            }
            else{
                nn++;
            }
        }

        cout<<endl<<endl<<endl;
        cout<<np<<endl<<nn;
//        print_arr1(a, n);
        cout<<endl<<endl;

        if(np==0){
            cout<<largest(a, n);
        }
        else{
            vector<ll> v;
            ll m = -1, l = INF;
            for(ll i= pi; i < n; i++){
                if(a[i]>0){
                    if(a[i+1]>0){
                        m=max(m,a[i+1]);
                    }
                    else{
                        v.push_back(m);
                        l= INF;
                    }
                }
                else{
                    if(a[i+1]<0){
                        l=max(l,a[i+1]);
                    }
                    else{
                        v.push_back(l);
                        m=-1;
                    }
                }
            }
            cout<<accumulate(v.begin(), v.end(), 0);
        }
    }

    return 0;
}
