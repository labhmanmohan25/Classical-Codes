#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string a[4];
    int p=0,q=0,r=0;
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
//     for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            cout<<a[i][j];
//        }
//        cout<<"\n";
//    }

         for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {	
                p=0;
                q=0;
                    if(a[i][j]=='#')
                        p++;
                    else q++;

                    if(a[i+1][j]=='#')
                        p++;
                    else q++;

                    if(a[i][j+1]=='#')
                        p++;
                    else q++;

                    if(a[i+1][j+1]=='#')
                        p++;
                    else q++;
                    
                    if(p!=2 || q!=2)
                    r++;
	                if(r>0)
		            {
		                cout<<"YES";
		                return 0;
		            }
                }

                
                    

            }

                cout<<"NO";

	return 0;
}
