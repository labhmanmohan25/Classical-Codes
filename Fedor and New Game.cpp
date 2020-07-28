#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
#define ull unsigned long long int 

unsigned int countSetBits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

int main(){
	int n,m,t1,k,count=0,i=0,temp;
	cin>>n>>m>>k;
	int a[m+1];
	t1=m;
	while(i<=m){
		cin>>a[i];
		i++;
	}
	for(i=0;i<m;i++){
		a[i]=countSetBits(a[i]^a[m]);
		if(a[i]<=k){
			count++;
		}
	}
	cout<<count;
	
	return 0;
}
  
