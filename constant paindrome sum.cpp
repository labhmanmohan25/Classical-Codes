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
        ll n, index=0, temp;
        cin>>n;
        vector<vector<ll> > v(n);
        for(ll i=0; i<n; i++){

                 print_vector2(v);

            cin>>temp;
            if(index == 0){
                v[0][0]=temp;
            }
            else{
                if((v[index][0])*(temp) > 0){
                    v[index].push_back(temp);
                }
                else{
                    v[index+1][0]=(temp);
                    index++;
                }
            }
        }
        print_vector2(v);



    }


    return 0;
}
