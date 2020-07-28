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
       long long int n,cnt=0;
       cin>>n;
       long long int apu[n];
       for(int i=0;i<n;i++)
       {
           cin>>apu[i];
       }

        sort(apu, apu+n, greater<int>());

        for(int i=0;i<n;i++)
       {
            if(apu[i]!=0 && i!=0)
              {
                  if((apu[i]-i)<=0)
                    break;
                  apu[i]=apu[i]-i;
              }
            cnt=cnt+apu[i];
       }

        cout<<cnt%mod<<"\n";
    }


    return 0;
}
