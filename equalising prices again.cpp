#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>

int main(){
	int q,n,i;
	long long int sum,temp;
	float a;
	cin>>q;
	while(q--){
		sum=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>temp;
			sum=sum+temp;
		}	
//		a=(float)sum/(float)n;
//		cout<<ceil(a)<<endl;
		if(sum%n==0){
			cout<<sum/n<<endl;
		}
		else {
			cout<<sum/n +1<<endl;
		}
	}

	return 0;
}
