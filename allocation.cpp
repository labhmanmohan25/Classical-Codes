#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
#include <math.h>
#include <cstdlib>
#include <iostream>

int main() {
    long long int t,n,m=0,b,count;
    cin>>t;
    while(t--){
    	count=0;
    	cin>>n>>b;
    	long long int a[n];
    	for(long long int i=0;i<n;i++){
    		cin>>a[i];
		}
		sort(a, a+n);
		for(long long int i=0;i<n;i++){
			if(b>=a[i]){
				b=b-a[i];
				count++;
			}

		}

		m++;

		cout<<"Case #"<<m<<":"<<" "<<count<<endl;

	}
}
