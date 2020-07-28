#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
 
int isDivisible(string n) 
{  
    int p = n.length(),sum=0;
    if(n[p-1]%2==0 || n[p-1]==5)
		return 1;
	for(int i=0;i<p;i++){
		sum=sum+n[i];
	}  
	if(sum%3==0)
		return 1;
    return 0; 
} 

int main()
{
    long long int t,t2,count;
    string temp,i,j;
    cin>>t;
    while(t--)
    {
        cin>>temp;
        t1=temp.length()
		b=pow(10,temp);
        for(i=a;i<b;i++){ 
			j=i;
			count=0; 
			for(int p=0;p<)
            if(count){
            	continue;
			}
            j=i;
			t2=isDivisible(j);      	
        	if(t2==0){
        		cout<<i<<endl;
        		break;
			}
		}
        if(i==pow(10,temp)){
        	cout<<"-1"<<endl;
		}
    }
    return 0;
}
