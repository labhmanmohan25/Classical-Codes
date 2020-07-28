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
const int INF = 1e18L + 5;

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if(x > x2 || x< x1 || y > y2 || y < y1){
            cout<<"No"<<endl;
        }
        else if(x1 == x2 && ((a != 0) || (b != 0))){
            cout<<"No"<<endl;
        }
        else if(y1 == y2 && ((c != 0) || (d != 0))){
            cout<<"No"<<endl;
        }
        else if(x2-x>=b-a&&b>a){
            cout<<"Yes"<<endl;
        }
        else if(x-x1>=a-b&&a>b){
            cout<<"Yes"<<endl;
        }
        else if(y2-y>=d-c&&d>c){
            cout<<"Yes"<<endl;
        }
        else if(y-y1>=c-d&&c>d){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
