//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int rev=0, digit, b=n;
		    while(n!=0)
		    {
		        digit=n%10;
		        rev=rev*10+digit;
		        n=n/10;
		    }
		    if(rev==b)
		    {
		        return "Yes";
		    }
		    else
		    {
		        return "No";
		    }
		    
		    // Code here.
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends