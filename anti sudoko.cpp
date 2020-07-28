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
    ll pony;
    cin>>pony;
    for(ll pint=0;pint<pony;pint++){
        vector<string> apu(9);
        ll c,d;
        for(c=0;c<9;c++){
                cin>>apu[c];
        }
        c=0;d=0;
        while(c<9 && d<9){
            if(apu[c][d]=='1')

                apu[c][d]='3';

            else if(apu[c][d]=='9')
                apu[c][d]='4';


            else
                apu[c][d]=apu[c][d]+1;

            c++;
            d=(d+3)%9;

                 if(c%3==0)
                d++;
        }
        for(c=0;c<9;c++){
            for(d=0;d<9;d++){
                cout<<apu[c][d];
            }cout<<"\n";
        }
    }
    return 0;
}
