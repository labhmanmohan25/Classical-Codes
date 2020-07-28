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

void print_vector(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
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
    string s;
    cin>>n>>s;
    if(n==1 || n==2){
        cout<<"0";
        return 0;
    }
    ll cnt = 0;

    vector<ll> r,g,b;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='R'){
            r.push_back(i);
        }
        else if(s[i]=='G'){
            g.push_back(i);
        }
        else{
            b.push_back(i);
       }
    }

    ll tr=0,tb=0,tg=0;

    if(g[0]==0){
        vector<ll> temp = r;
        r=g;
        g=temp;
    }
     if(b[0]==0){
        vector<ll> temp = b;
        r=b;
        b=temp;
    }
    cout<<s.size()<<" "<<r.size()<<" "<<
        for(ll i=0;i<r.size();i++){
            for(ll j=tg;j<g.size();j++){
                if(g[j]>r[i]){
                    tg=j;
                    break;
                }
            }
            for(ll j=tb;j<b.size();j++){
                if(b[j]>r[i]){
                    tb=j;
                    break;
                }
            }
            cnt = cnt +  (g.size()-tg)*(b.size()-tb);
        }


    cout<<cnt;
    return 0;
}
