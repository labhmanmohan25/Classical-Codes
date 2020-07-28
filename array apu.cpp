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
    long long int n,i;
    cin>>n;
    long long int a[n],b[n-2];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    if(a[n-1]<1)
    {
        cout<<"1"<<" "<<a[0]<<"\n";     //-ve


        for(int i=0;i<n-2;i++)
        {                                   //+ve
            b[i]=a[i+1];
        }
        cout<<n-2<<" ";
         for(i=0;i<n-2;i++)
        {
           cout<<b[i]<<" ";
        }
         cout<<"\n";

        cout<<"1"<<" "<<a[n-1]<<"\n";        //0



    }

    else
    {
        cout<<"1"<<" "<<a[0]<<"\n";       //-ve

        cout<<"1"<<" "<<a[n-1]<<"\n";       //+ve

         for(i=0;i<n-2;i++)
        {                                   //0
            b[i]=a[i+1];
        }
        cout<<n-2<<" ";
         for(i=0;i<n-2;i++)
        {
           cout<<b[i]<<" ";
        }
    }

	return 0;
}
