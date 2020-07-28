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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n; i++){
            cin>>v[i];
        }
        if(n==1 || n==2){
            print_vector1(v);
            continue;
        }
        sort(v.begin(), v.end());
        vector<ll> ans(2);
        ll diff = INT_MAX, index1, index2;
        for(ll i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1])<diff){
                diff=abs(v[i]-v[i+1]);
                ans[0]=v[i];
                ans[1]=v[i+1];
                index1=i;
                index2=i+1;
            }
        }
        ll z=index2+1;
        ll k=index1-1;

        if(abs(v[z]-v[index2])<abs(v[index1]-v[k])){
            ll temp = ans[0];
            ans[0]=ans[1];
            ans[1]=temp;
        }
        if(k!=-1){
            while(k>=0){
                if(abs(v[z]-v[index2])<abs(v[index1]-v[k]) && z < n){
                    ans.push_back(v[z]);
                    index2++;
                    z++;
                }
                else{
                    ans.push_back(v[k]);
                    k--;
                    index1--;
                }
            }
        }
        else{
            ans = v;
        }
        print_vector1(ans);
    }

    return 0;
}
