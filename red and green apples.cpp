#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	long long int X,Y,a,b,c,i,j,sum;
	cin>>X>>Y>>a>>b>>c;
	long long int A[a],B[b],C[c]; 
	for(i=0;i<a;i++){
		cin>>A[i];
	}
	for(i=0;i<b;i++){
		cin>>B[i];
	}
	for(i=0;i<c;i++){
		cin>>C[i];
	}
	
	sort(A, A+a, greater<long long int>());
	sort(B, B+b, greater<long long int>());
	sort(C, C+c, greater<long long int>());
	
	long long int apu[X+Y]={0};
	
	if(X<a){
		for(i=0;i<X;i++){
			apu[i]=A[i];
		}
	}
	if(X>=a){
		for(i=0;i<a;i++){
			apu[i]=A[i];
		}
	}
	if(Y<b){
		for(i=0;i<Y;i++){
			apu[X+i]=B[i];
		}
	}
	if(Y>=b){
		for(i=0;i<b;i++){
			apu[X+i]=B[i];
		}
	}
	
	sort(apu, apu+X+Y, greater<long long int>());
	
	j=0;
	sum=0;
	
	for(i=0;i<X+Y;i++){
		if(apu[i]==0){
			continue;
		}
		else if(C[j]>apu[i]){
			sum=sum+C[j];
			C[j]=0;
			j++;
		}
		else{
			sum=sum+apu[i];
		}
	}
	
	for(i=0;i<X+Y;i++){
		if(apu[i]==0){
			apu[i]=C[j];
			sum=sum+apu[i];
			j++;
			if(j==c){
				break;
			}
		}
	}
	
	cout<<sum;
	
	return 0;
}
