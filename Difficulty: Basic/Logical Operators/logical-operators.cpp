//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);


// } Driver Code Ends
//User function Template for C++


void logicOp(int a, int b)
{
    int x=a&&b;
    int y=a||b;
    int z=(!a)&&(!b);
    cout<<x<<" "<<y<<" "<<z<<" ";
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    logicOp(a,b);
	    
	}
	return 0;
}
// } Driver Code Ends