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

void print_vector(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='7'){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";

    return 0;
}
