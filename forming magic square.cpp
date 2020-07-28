#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int main() {
	int val[8]={0},a[9],magic[8][9]={{8,1,6,3,5,7,4,9,2},
	    {6,1,8,7,5,3,2,9,4},
	    {4,9,2,3,5,7,8,1,6},
	    {2,9,4,7,5,3,6,1,8},
	    {8,3,4,1,5,9,6,7,2},
	    {4,3,8,9,5,1,2,7,6},
	    {6,7,2,1,5,9,8,3,4},
	    {2,7,6,9,5,1,4,3,8}
	for(int i=0;i<9;i++){
		cin>>a[i];
		for(int j=0;j<8;j++){
			val[j]=val[j]+abs(magic[j][i]-a[i]);
		}
	}			      
    cout<<*min_element(val,val+8);
    return 0;
}

