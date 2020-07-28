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

int main()
{
     int test;
    cin>>test;
    while(test--)
    {
        int n,m,c;
        cin>>n>>m;
        char a[n][m];
        for(ll i=0; i<n; i++){
            if(i%2==0){
                c=0;
            }
            else{
                c=1;
            }
            for(ll j=0;j<m;j++){
                if(c%2==0){
                    a[i][j]='B';
                }
                else{
                    a[i][j]='W';
                }
                c++;
            }
        }
        if(n%2==0 || m%2 == 0){
            a[0][1]='B';
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }

    return 0;
}
