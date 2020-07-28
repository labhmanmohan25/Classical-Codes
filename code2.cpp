#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
#define mod 1000000007
const int INF = 1e18L + 5;

int kFactors(long long int n, long long int k)
{
    // A vector to store all prime factors of n
    vector<long long int> P;

    // Insert all 2's in vector
    while (n%2 == 0)
    {
        P.push_back(2);
        n /= 2;
    }

    // n must be odd at this point
    // So we skip one element (i = i + 2)
    for (long long int i=3; i*i<=n; i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
    }

    // This is to handle when n > 2 and
    // n is prime
    if (n > 2)
        P.push_back(n);

    // If size(P) < k, k factors are not possible
    if (P.size() < k)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
            long long int x,k;
            cin>>x>>k;

                cout<<kFactors(x,k)<<endl;

    }

    return 0;
}
