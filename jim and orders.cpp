#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

void insertionSort(long long int arr[][2], long long int n)  
{  
    long long int i, key, pey, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i][0];
		pey = arr[i][1];  
        j = i - 1;  
        while (j >= 0 && arr[j][0] > key) 
        {  
            arr[j + 1][0] = arr[j][0];
			arr[j + 1][1] = arr[j][1];  
            j = j - 1;  
        }  
        arr[j + 1][0] = key;
		arr[j + 1][1] = pey; 
    }  
}

int main() { 
	long long int n,i;
	cin>>n;
	long long int o[n],p[n],d[n][2];
	for(i=0;i<n;i++){
		cin>>o[i]>>p[i];
		d[i][0]=o[i]+p[i];
		d[i][1]=i;
	}
	insertionSort(d,n);
	for(i=0;i<n;i++){
		cout<<d[i][1]+1<<" ";
	}
	
	
	return 0; 
} 
  
