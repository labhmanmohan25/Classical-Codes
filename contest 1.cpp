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

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        int temp,n,colour=0,cnt,p;
        cin>>n;
        int arr[1001]={0};
        for(int i=1;i<=n; i++){
            cin>>temp;
            cnt=0;
            for(int x=1;x<=colour;x++){
                for(int j=2;j<=1000;j++){
                        p=gcd(j, temp);
                    if(arr[j]==x && p!=1){
                        arr[temp]=arr[j];
                        cnt++;
                        break;
                    }
                    else{
                        colour++;
                        arr[temp]=colour;
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt==0){
                colour++;
                arr[temp]=colour;
            }
        }

            cout<<colour<<endl;

        for(int i=1;i<=1000;i++){
            if(arr[i]!=0){
                cout<<arr[i]<<" ";
            }
        }
    cout<<endl;
    }
    return 0;
}
