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
        ll nr,ng,nb;
        cin>>nr>>nr>>nb;
        vector<ll> r(nr), g(ng), b(nb);
        for(ll i=0;i<nr;i++){
            cin>>r[i];
        }
        for(ll i=0;i<ng;i++){
            cin>>g[i];
        }
        for(ll i=0;i<nb;i++){
            cin>>b[i];
        }

        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());

        ll s= r.size();

        vector<vector<ll> > a(s,vector<ll> (1));

        for(ll i=0;i<r.size();i++){
            a[i][0]=r[i];
        }

        vector<ll> ans(r.size());

        for(ll i=0;i<r.size();i++){
            ll diff = INF;
            for(ll j=0; j<g.size();j++){
                        ll temp;
                if(abs(g[j]-r[i])<diff){
                    temp = g[j];
                }
                else{
                    a[i][1]=temp;
                    break;
                }
            }
            diff = INF;
            for(ll j=0; j<b.size();j++){
                        ll temp;
                if(abs(b[j]-g[i])<diff){
                    temp = b[j];
                }
                else{
                    a[i][2]=temp;
                    break;
                }
            }
            ans[i] = (r[i][0]-r[i][1])^2 + (r[i][1]-r[i][2])^2 (r[i][0]-r[i][2])^2;
        }

        cout<<*max_element(ans.begin(), ans.end());

    }
    return 0;
}
