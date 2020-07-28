#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n,l,y,x,i,cnt;
	cin>>n;
	while(n--){
		cin>>l;
		y=0;
		cnt=0;
		while(l-5*y>=0){
			if((l-5*y)%3==0){
				for(i=0;i<l-5*y;i++){
					cout<<"5";
				}
				while(i<l){
					cout<<"3";
					i++;
				}
				cout<<endl;
				cnt=1;
				break;
			}
			y++;		
		}
		if(cnt==0){
			cout<<"-1"<<endl;
		}
	}
	
    return 0;
}
