//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        
        int sum=0, rev=0,digit,r=0;
        while(n!=0)
         {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        int b=sum;
        while(sum!=0)
        {
            digit=sum%10;
            rev=rev*10+digit;
            sum=sum/10;
        }
        if(b==rev)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends