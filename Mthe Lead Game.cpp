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
    ll n;
    cin>>n;
    vector<ll> leadp1, leadp2;
    for(ll i = 0; i < n; i++){
        ll p1, p2;
        cin>>p1>>p2;
        if(p1 > p2){
            leadp1.push_back(p1 - p2);
        }
        else{
            leadp2.push_back(p2 - p1);
        }
    }
    sort(leadp1.begin(), leadp1.end());
    sort(leadp2.begin(), leadp2.end());

    cout<<accumulate(leadp1.begin(), leadp1.end(), 0)<<endl;
    cout<<accumulate(leadp2.begin(), leadp2.end(), 0)<<endl;

    if(accumulate(leadp1.begin(), leadp1.end(), 0) > accumulate(leadp2.begin(), leadp2.end(), 0)){
        cout<<"1 "<<leadp1.back();
    }
    else{
        cout<<"2 "<<leadp2.back();
    }

    return 0;
}
