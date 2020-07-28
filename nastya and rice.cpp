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

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

       vector<ll> v={0,0,0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1};
       cout<<accumulate(v.begin(), v.begin()+1, 0)<<endl;
       cout<<accumulate(v.begin(), v.begin()+2, 0)<<endl;
       cout<<accumulate(v.begin() + 1, v.begin()+3, 0)<<endl;
       cout<<accumulate(v.begin(), v.begin()+4, 0)<<endl;
    }

    return 0;
}
