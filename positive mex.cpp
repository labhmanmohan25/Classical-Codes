#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
using ll = long long;
const int INF = 1e9 + 5;
#define mod  998244353


void print_vector2(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v){
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}

ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// In the array A at every step we have two
// choices for each element either  we can
// ignore the element or we can include the
// element in our subset
void subsetsUtil(vector<ll>& A, vector<vector<ll> >& res,
                 vector<ll>& subset, ll index)
{
    res.push_back(subset);
    for (ll i = index; i < A.size(); i++) {

        // include the A[i] in subset.
        subset.push_back(A[i]);

        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);

        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }

    return;
}

// below function returns the subsets of vector A.
vector<vector<ll> > subsets(vector<ll>& A)
{
    vector<ll> subset;
    vector<vector<ll> > res;

    // keeps track of current element in vector A;
    ll index = 0;
    subsetsUtil(A, res, subset, index);

    return res;
}

// Function to return the first missing positive
// number from the given unsorted array
ll firstMissingPos(vector<ll> A, ll n)
{

    // To mark the occurrence of elements
    bool present[n + 1] = { false };

    // Mark the occurrences
    for (ll i = 0; i < n; i++) {

        // Only mark the required elements
        // All non-positive elements and
        // the elements greater n + 1 will never
        // be the answer
        // For example, the array will be {1, 2, 3}
        // in the worst case and the result
        // will be 4 which is n + 1
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true;
    }

    // Find the first element which didn't
    // appear in the original array
    for (ll i = 1; i <= n; i++)
        if (!present[i])
            return i;

    // If the original array was of the
    // type {1, 2, 3} in its sorted form
    return n + 1;
}

int main(){
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vector<ll> a(n, 0);

        for(ll i=0; i<n; i++){
            cin>>a[i];
        }

        vector<vector<ll> > res = subsets(a);
        ll sum = 0;

        for (int i = 0; i < res.size(); i++) {
            sum = (sum + firstMissingPos(res[i], res[i].size())%mod)%mod;
        }

        cout<<sum<<"\n";
    }

    return 0;
}
