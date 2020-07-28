#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long;
#define ull unsigned long long;
const int INF = 1e9 + 5;
const int MOD = 1000000007;
const int MAX = 10000005;
const double PI = acos(-1.0);
#define pb push_back
#define vll vector<long long int>
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define       pii        pair <ll,ll>
#define       mii        map <ll,ll>
#define       msi        map <string,ll>
#define       pb         push_back
#define       nl         "\n"
#define       sp         " "
void printSpiral(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// x stores the layer in which (i, j)th
			// element lies
			int x;

			// Finds minimum of four inputs
			x = min(min(i, j), min(n-1-i, n-1-j));

			// For upper right half
			if (i <= j)
				printf("%d\t ", (n-2*x)*(n-2*x) - (i-x)
					- (j-x));

			// for lower left half
			else
				printf("%d\t ", (n-2*x-2)*(n-2*x-2) + (i-x)
					+ (j-x));
		}
		printf("\n");
	}
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        printSpiral(n);

        cout<<nl;
    }
    return 0;
}
