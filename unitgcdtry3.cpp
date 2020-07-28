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
    vector<int> v(n+1,0);
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
    for (int p=2; p<=n; p++){
       if (prime[p])
          continue;
       else if(p%2==1)
          v[p]=1;
       else
          v[p]=2;
    }

    return v;
}

vector<vector<int> > SieveOfEratosthenes(int n, vector <int> g)
{
    int cnt=0,i;
    vector<vector <int> > ve(2);
     for (int p=2; p<=n; p++){
          if (g[i]==0)
            cnt++;
      }
      cout<<cnt+1<<" "<<"1"<<" ";
      for (int p=2; p<=n; p++){
          if (g[i]==0){
            cout << p << " ";
          }
          else if(g[i]==1){
            ve[1].push_back(i);
            }
          else{
            ve[0].push_back(i);
            }
      }

    return ve;
}

int main()
{

    int t;
    cin>>t;
    vector <int> g = Sieve(1000000);
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
        vector<vector<int> > v;
        v = SieveOfEratosthenes(n, g);
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



