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


int main(){
int len[10]={0};
for(ll k=1;k<=6;k++){
        int t;
    cin>>t;
    len[t]=len[t]+1;
}
int l=0,e=0,b=0;

for(ll i=1;i<=9;i++){
    if(len[i]==4){
        l++;
    }
    if(len[i]==2){
        e++;
    }
    if(len[i]==1){
        b++;
    }
    if(len[i]==5){
        cout<<"Bear";
        return 0;
    }
    if(len[i]==6){
        cout<<"Elephant";
        return 0;
    }
}
if(l==1 && e==1){
    cout<<"Elephant";
}
else if(l==1 && b==2){
    cout<<"Bear";
}
else{
    cout<<"Alien";
}
return 0;
}
