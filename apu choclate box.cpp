#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int largest(int arr[], int n)
{
	return *max_element(arr, arr+n);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        vector<int> v;
        int n = sizeof(arr)/sizeof(arr[0]);
        int p,m=0;
        p==largest(arr, n);
        for(int i=0;i<s;i++)
        {
            if(arr[i]==p)
            {
                v.push_back(i);
                m++;
                }
        }
        if(m==1)
        {
            cout<<s-1-v.front();
        }
        else
        {
            int a,b;
            a=v.front();
            b=v.back();
            if((b-a)<s/2)
                cout<<"0"<<"\n";
            else cout<<s-b-1<<"\n";

        }
    }
	return 0;

}
