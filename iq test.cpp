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
	string s[4];
	int i,j;
	for(i=0;i<4;i++){
		cin>>s[i];
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((s[i][j]==s[i][j+1]&&s[i][j]==s[i+1][j]&&s[i][j]==s[i+1][j+1]) || (s[i][j]!=s[i][j+1]&&s[i][j]==s[i+1][j]&&s[i][j]==s[i+1][j+1]) || (s[i][j]==s[i][j+1]&&s[i][j]!=s[i+1][j]&&s[i][j]==s[i+1][j+1]) || (s[i][j]==s[i][j+1]&&s[i][j]==s[i+1][j]&&s[i][j]!=s[i+1][j+1]) || s[i+1][j]==s[i][j+1]&&s[i+1][j]==s[i+1][j+1]&&s[i+1][j]!=s[i][j]){
				cout<<"YES";
				return 0;	
			}
		}
	}
	cout<<"NO";
	return 0;
}
  
