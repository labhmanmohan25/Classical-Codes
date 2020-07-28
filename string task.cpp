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
    string s;
    cin>>s;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
           || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' ||
           s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
           || s[i] == 'y'){
            continue;
           }
           else{
            cout<<".";
            if(s[i] < 'a'){
                cout<<char(s[i]+32);
            }
            else{
                cout<<s[i];
            }
           }
    }

    return 0;
}
