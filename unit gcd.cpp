#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        if(n>1){
            cout<<(n/2)<<"\n";
        }
        else{
            cout<<1<<"\n"<<"1 1"<<endl;
            continue;
        }
        int p=n;
        if(n%2==1){
            p=p-1;
        }
        for(i=1;i<=p;i=i+2){
            if(i==1 && n%2==1){
                cout<<"3 1 2 "<<n<<endl;
            }
            else{
                cout<<"2 "<<i<<" "<<i+1<<endl;
            }
        }
    }

    return 0;
}
