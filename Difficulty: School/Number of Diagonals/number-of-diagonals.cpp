//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long diagonals(int n)
	{
	    return ((long long)n * ((long long)n - 3)) / 2;
		// Your code goes here

	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

	   

	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    }
    return 0;
}

// } Driver Code Ends