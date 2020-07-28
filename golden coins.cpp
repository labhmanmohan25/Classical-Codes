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
	long long int m,h;
	cin>>m;
	h=(m/500)*1000;
	m=m-(m/500)*500;
	h=h+(m/5)*5;
	cout<<h;
	return 0;
}
