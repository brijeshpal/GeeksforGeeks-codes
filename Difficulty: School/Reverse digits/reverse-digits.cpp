//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long rev=0, digit;
		    while(n!=0)
		    {
		        digit=n%10;
		        rev=rev*10+digit;
		        n=n/10;
		        
		        if(rev==0)
		        {
		            continue;
		        }
		         
		    }
		    return rev;
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends