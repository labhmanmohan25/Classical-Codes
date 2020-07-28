#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
  
int main() { 
  	long long int i,j,t,t2,temp,count;
  	long long int a, b, flag; 
    cin>>t;
    while(t--)
    {
		cin>>temp;
		a=pow(10,temp-1);
		b=pow(10,temp);
		
		if(temp==1){
			cout<<"-1"<<endl;
			continue;
		}
		
		for (i = a; i < b; i++){
			count=0; 
	        if (i == 1 || i == 0) 
	            continue; 
	        j=i;
			while (j>0)
                {
                	if(count){
                		break;
					}
	                count = count + (j%10>1 ? 0 : 1);
	                j = j/10;
                }
            if(count>0)
            	continue;
            	
	        flag = 1; 
	  
	        for (j = 2; j <= i / 2; ++j)  
	        { 
	            if (i % j == 0)  
	            { 
	                flag = 0; 
	                break; 
	            } 
	        } 
	  
	    	if (flag == 1) {
	            cout << i <<endl;
	            break;
			}
   		} 
	
	}
    return 0; 
} 
  
