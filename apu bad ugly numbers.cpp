#include <bits/stdc++.h>
using namespace std;
#include<math.h>

int isDivisible(long long int n)
{
    long long int temp = n;

    // check if any of digit divides n
    while (n) {
        int k = n % 10;

        // check if K divides N
        if (temp % k == 0)
            return 1;

        n /= 10;
    }

    return 0;
}

int main()
{
    long long int t,alpha,j;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        


        for(long long int i=pow(10,n-1);i<pow(10,n);i++)
        {
        	j=i;
        	int count = 0;
            while (j>0)
                {
	                count = count + (i%10>0 ? 0 : 1);
	                i = i/10;
                }
			alpha=isDivisible(i);
            if(alpha==0 && count==0){
			    cout<<i<<"\n";
			    break;
        	}
            else cout<<"-1"<<"\n";
        }

    }
    return 0;
}
