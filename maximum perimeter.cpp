#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n, greater<long long int> ());
	for(i=0;i<n-2;i++){
		if(a[i+1]+a[i+2]>a[i]){
			cout<<a[i+2]<<" "<<a[i+1]<<" "<<a[i]<<endl;
			return 0;
		}
	}
	    cout<<"-1"<<endl;
    return 0;
}
