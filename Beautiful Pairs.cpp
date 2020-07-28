#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n,i,temp,cnt=0,count=0;
	cin>>n;
	int a[1000]={0},b[1000]={0};
	for(i=0;i<n;i++){
		cin>>temp;
		if(a[temp-1]==1){
			cnt=1;
		}
		a[temp-1]=1;
	}
	for(i=0;i<n;i++){
		cin>>temp;
		if(b[temp-1]==1){
			cnt=1;
		}
		b[temp-1]=1;
	}
	for(i=0;i<1000;i++){
		if(a[i]==b[i] && (a[i]==1 || b[i]==1)){
			count++;
		}
	}
	if(count==n){
		cout<<count<<endl;
	}
	else {
		cout<<count+1<<endl;
	}
    return 0;
}
