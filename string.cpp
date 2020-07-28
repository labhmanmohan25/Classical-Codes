#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
  
int main() { 
  	string a,b;
  	char temp;
  	cin>>a>>b;
  	temp=a[0];
  	a[0]=b[0];
  	b[0]=temp;
  	cout<<a.size()<<" "<<b.size()<<endl<<a+b<<endl<<a<<" "<<b<<endl;
    return 0; 
} 
  
