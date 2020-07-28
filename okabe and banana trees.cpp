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
    ll m,b;
    cin>>m>>b;
    ll ymax = b, xmax = b*m, x, y, sum = 0;
    ll cnt = 0;
    for(cnt=0; cnt<=ymax; cnt++){
        ll temp;
        y = cnt;
        x = (b - y) * m;

        temp = ((((x+1)*x)/2) * (y + 1)) + ((x+1) * (((y+1)*y)/2)) ;
//        cout<<temp<<endl<<endl<<endl;
        sum = max(sum,temp);
    }

cout<<sum;

return 0;
}
