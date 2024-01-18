#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int rev_num = 0;
	    while(n!= 0)
	    {
	        rev_num = rev_num*10 + n%10;
	         n = n/10;
	        
	    }
	    if(n==rev_num)
	    {
	        cout<<"WINS"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	}

}
