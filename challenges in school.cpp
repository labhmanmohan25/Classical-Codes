#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
using ll = long long;
const int INF = 1e9 + 5;

int main(){
    ll n,k,cnt=0;
    cin>>n>>k;
    char a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll> > v(k);
    ll pleb=0,plx=k;
    while(k--){
    cnt=0;
    pleb++;
        for(ll i=0;i<n-1;i++){
            if(a[i]=='R' && a[i+1]=='L'){
                cnt++;
                a[i]='L';
                a[i+1]='R';
                i++;
                v[pleb].push_back(i);
            }
        }
        v[pleb].push_back(cnt);
    }
    if(pleb!=0){
        cout<<"-1\n";
    }
    else{
        for(ll i=0;i<plx;i++){
                ll sz=v[i].size();
            cout<<v[i][sz-1];
            for(ll j=0;j<sz-2;j++){
                cout<<v[i][j];
            }
            cout<<"\n";
        }
    }

    return 0;
}
