#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void countXOR(int n)
{
	int count0 = 0, count1 = 0;
	while (n)
	{
		//calculating count of zeros and ones
		(n % 2 == 0) ? count0++ :count1++;
		n /= 2;
	}
   cout<<count1;
	return;
}
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;

    else

        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n],d[n],b[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            d[i]=a[i];
        }
        while(q--)
        {
            int p;
            cin>>p;
            for (int j=0;j<n;j++)
            {
                b[j]=p^d[j];
            }
        int cnteven=0,cntodd=0;
         for(int i=0;i<n;i++)
        {
           // cout << countSetBits(b[i])<<" ";
            if(countSetBits(b[i])%2==0)
                 cnteven++;
            else
                 cntodd++;
        }

        cout<<cnteven<<" "<<cntodd;



 //           int ans ;
//            ans=array_to_num(b,n);
 //           countXOR (ans);
        }

    }

    return 0;
}
