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
        ll a, b, q;
        cin>>a>>b>>q;
        while(q--){
            ll l, r, cnt = 0;
            cin>>l>>r;
                    ll prod = (a * b);

                cnt = ((r / prod) - (l / prod) - 1) * (min(a, b) - 1);
                if((r - ((r / prod) * prod) < min(a,b) - 1) && r > a && r > b){
                    cnt = cnt + r - ((r / prod) * prod);
                }
                else{
                    cnt = cnt + min(a,b) - 1;
                }
                if((l - ((l / prod) * prod) <= min(a,b) - 1) && r > a && r > b){
                    cnt = cnt + min(a,b) - (l % prod);
                }

            cout<<cnt<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

