#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int main() {

    long long int t;
    cin>>t;
    
    while(t>0){
	    long long int j,i,value,count=0,N;
	    cin>>N;
	    long long int arr[N];
	    for(i = 0; i < N; i++) {
	        cin>>arr[i];
	    }
	    
		for(i=1;i<N;i++)
	    {
	    	value=arr[i];
	        j=i-1;
	        while(j>=0 && value<arr[j])
	        {
	            arr[j+1]=arr[j];
	            j=j-1;
	            count++;
	        }
	        arr[j+1]=value;
	    }
	    cout<<count<<endl;
	    t--;
	}
    
    return 0;
}

