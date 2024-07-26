//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        int n,num=N;
        int sum=0;
        while(N>0)
        {
            n=N%10;
            sum=sum+fact(n);
            N=N/10;
        }
        if(num==sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        // code here
    }
    int fact(int n)
    {
        int fact=1;
        for(int i=1; i<=n; ++i)
        {
            fact*=i;
        }
        return fact;
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
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends