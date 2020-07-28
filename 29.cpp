#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int main() {
	long long int n,i,j;
	cin>>n;
	string arr[n],temp;
	
	for(i=0;i<n;i++){
		cin>>arr[i];	
	}
	
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>=temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	} 
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;	
	}
    
    return 0;
}

