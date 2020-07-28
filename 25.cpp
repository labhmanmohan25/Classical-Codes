#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 

int main(){
	long long int n,i,j,cnt=1,num;
	string temp;
	cin>>n;
	vector<string> a[101];
	int arr[100]={0};
	for(i=0;i<n;i++){
		cin>>num>>temp;
			if(cnt<=n/2){
				a[num].push_back("-");
				arr[num]=arr[num]+1;
			}
			else{
				a[num].push_back(temp);
				arr[num]=arr[num]+1;
			}
			cnt++;
	}
	
	for(i=0;i<101;i++){
		for(j=0;j<arr[i];j++){
			cout<<a[i][j]<<" ";
		}
	}

	return 0;
}
