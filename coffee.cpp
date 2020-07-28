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
	string s;
	cin>>s;
	if(s[0]!=s[1] && s[0]!= s[2] && s[0]!=s[4] && s[1]!= s[2] && s[1]!=s[4] && s[2]==s[3] && s[4]==s[5]){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
	
	return 0;
}
