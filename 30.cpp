#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    long long int n,i,temp,j,k,cnt=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
        for(i=1;i<n;i++){
            temp=a[i];
                for(j=i;j>=0;j--){
                    if(a[j]>temp){
                        a[j+1]=a[j];
                            if(j==0){
                                a[j]=temp;
                            }
                    }
                    else if(a[j]<temp){
                        a[j+1]=temp;
                        break;
                    }
                }
            }
            
    for(k=0;k<n;k++){
        cout<<a[k]<<endl;
    }
        
    return 0; 
}

