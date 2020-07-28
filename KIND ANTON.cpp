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
    ll t;
    cin>>t;
    while(t--){
        ll n,m=-1,p=-1,cnt=0;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1 && p<0){
                p=i;
            }
            if(a[i]==-1 && m<0){
                m=i;
            }
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>a[i] && ( p>=i || p==-1)){
                cnt++;
            }
            if(b[i]<a[i] && (m>=i || m==-1)){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
