#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

long long int FIB[20];

long long int fib(long long int n){
	if(FIB[n-1]!=-1){
		return FIB[n-1];
	}
	else{
		FIB[n-1] = (fib(n-1))*(fib(n-1)) + fib(n-2);
	}
	
	return FIB[n-1];
}

int main()
{
	long long int t1,t2,n,temp,i;
	cin>>t1>>t2>>n;
	for(i=0;i<20;i++){
		FIB[i]=-1;
	}
	FIB[0]=t1;
	FIB[1]=t2;

	cout<<fib(n);
	return 0;
}
