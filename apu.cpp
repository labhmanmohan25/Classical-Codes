#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int perfectest(int premium[2]){
	int cutest=premium[1]+10*premium[0];
	return cutest;
}

int main()
{
    int t,max;
    cin>>t;
    while(t--)
    {
        int a,b,p,warmth;
        cin>>a>>b;                           //assume a>b

        if(b>a)
        {
            warmth=a;
            a=b;
            b=warmth;
        }

        if(a<10&&b<10)                      //both single digit
        {
            cout<<a+b<<endl;
            break;
        }
        
        if(a>=10&&b<10)                     //a double b single
        {
        	int saxyApu=a, warmth;
            int apuSexy[2];
			apuSexy[1]=a%10;
			a=a/10;
			apuSexy[0]=a; 
			int cutestApu[3];
			cutestApu[0]=saxyApu+b;
			max=cutestApu[0];
			warmth=b;
			apuSexy[0]=b;
			b=warmth;
			cutestApu[1]=perfectest(apuSexy)+b;
			if(cutestApu[1]>max){
				max=cutestApu[1];
			}
			warmth=apuSexy[0];
			apuSexy[0]=apuSexy[1];
			apuSexy[1]=warmth;
			warmth=b;
			apuSexy[0]=b;
			b=warmth;
            cutestApu[2]=perfectest(apuSexy)+b;
            if(cutestApu[2]>max){
				max=cutestApu[2];
			}
            
            cout<<max<<endl;
        }
        
        if(a>=10&&b>=10)                     //a double b double
        {	
        	int sexy=a, cute=b;
        	int apuSexy[2];
			apuSexy[1]=a%10;
			a=a/10;
			apuSexy[0]=a; 
			int apuShaitan[2];
			apuShaitan[1]=b%10;
			b=b/10;
			apuShaitan[0]=b;
			int cutestApu[4];
			cutestApu[0]=sexy+cute;
			max=cutestApu[0];
			warmth=apuShaitan[1];
			apuSexy[1]=apuShaitan[1];
			apuShaitan[1]=warmth; 	
			cutestApu[1]=perfectest(apuSexy)+perfectest(apuShaitan);
			if(cutestApu[1]>max){
				max=cutestApu[1];
			} 	
			warmth=apuShaitan[0];
			apuSexy[0]=apuShaitan[0];
			apuShaitan[0]=warmth; 	
			cutestApu[2]=perfectest(apuSexy)+perfectest(apuShaitan);
			if(cutestApu[2]>max){
				max=cutestApu[2];
			}
			warmth=apuShaitan[0];
			apuSexy[0]=apuShaitan[0];
			apuShaitan[0]=warmth; 	
			cutestApu[2]=perfectest(apuSexy)+perfectest(apuShaitan);
			if(cutestApu[2]>max){
				max=cutestApu[2];
			} 	
		}
    }

	return 0;
}
