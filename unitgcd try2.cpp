#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

vector<int> Sieve(int n)
{
    vector<int> v;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          v.push_back(p);

    return v;
}

vector<vector<int> > SieveOfEratosthenes(int n, vector<int> g)
{
    int cnt=0,i;
    vector<vector <int> > v(2);
    bool prime[n+1];
    memset(prime, false, sizeof(prime));
    int j=0;
    for (int p=1; p<=n; p++)
    {
        if(j>g.size()){
            break;
        }
        else if (p == g[j])
        {
            prime[p]=true;
            j++;
        }
    }

      for (int p=2; p<=n; p++){
          if (prime[p])
          cnt++;
      }
      cout<<cnt+1<<" "<<"1"<<" ";
      for (int p=2; p<=n; p++)
      {

       if (prime[p])
          cout << p << " ";
      }

      for(int i=3;i<=n;i++){
        if(prime[i]==false){
            if(i%2==0){
                v[0].push_back(i);
            }
            else{
                v[1].push_back(i);
            }
        }
      }
    return v;
}

int main()
{

    int t;
    cin>>t;
    vector<int> g = Sieve(1000000);
    while(t--)
    {
        int n,i,cnt=0;
        cin>>n;
        if(n>1){
            cout<<floor(n/2)<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
        vector<vector <int> > v;
        v=SieveOfEratosthenes(n,g);
        cout<<endl;

//        for(long long int i=0;i< v[0].size();i++){
//            cout<<v[0][i]<<" ";
//        }
//        cout<<endl;
//        for(long long int i=0;i< v[1].size();i++){
//            cout<<v[1][i]<<" ";
//        }
//        cout<<endl;

        int j=0;
        for(i=0;i<v[0].size();i++){
            if(j<v[1].size() && v[1][j]==v[0][i]+1){
                    cout<<"2 "<<v[0][i]<<" "<<v[1][j]<<endl;
                    j++;
                }
            else{
                cout<<"1 "<<v[0][i]<<endl;
            }
        }
    }

    return 0;
}
