#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
#define mod 1000000007
const int INF = 1e18L + 5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
       cin>>n;
       long long int a[n];
       int count=100,c=0;
       for(long long int i=0;i<n;i++){
        cin>>a[i];
       }
       for(long long int i=0;i<n;i++){
        if(a[i]==1){
            if(count<5){
                cout<<"NO"<<endl;
                c=1;
                break;
            }
            else{
                count=0;
                // cout<<count<<endl;
            }
        }
        else{
            count++;
           // cout<<count<<endl;
        }
       }
       if(c==0)
       cout<<"YES"<<endl;

    }


    return 0;
}
