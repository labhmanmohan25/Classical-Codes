#include <iostream>
#include <string>
#include <string>
using namespace std;

// Function to remove adjacent duplicates characters from a string
void removeDuplicates(string &s) {
	char prev = '\0';
	for (auto it = s.begin(); it != s.end(); it++)
	{
		if (prev == *it) {
			s.erase(it);
			it--;
		}
		else {
			prev = *it;
		}
	}
}

// main function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a=0,b=0;
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        removeDuplicates(s);
       // cout << s << endl;
       for(i=0;i<n;i++)
       {

           if(s[i]=='L'&&s[i+1]=='R'||s[i]=='R'&&s[i+1]=='L')
            s[i+1]=='0';
            if(s[i]=='U'&&s[i+1]=='D'||s[i]=='D'&&s[i+1]=='L')
                s[i+1]=='0';

       }
       cout<<s;
//       for(i=0;i<n;i++)
//       {
//            if(s[i]=='L')
//                a--;
//            if(s[i]=='R')
//                a++;
//            if(s[i]=='U')
//                b++;
//            if(s[i]=='D')
//                b--;
//       }
//       cout<<a<<" "<<b<<"\n";

    }

	return 0;
}
