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
   int n,m,p;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==m)
	   p=i+1;
   }
   
    cout<<p;
	return 0;
}
