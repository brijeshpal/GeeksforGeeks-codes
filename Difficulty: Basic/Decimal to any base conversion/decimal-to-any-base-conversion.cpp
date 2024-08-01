//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string getNumber(int B, int N)
    {
        string res="";
        string digits = "0123456789ABCDEF";
        if(B<2 || B>16)
        {
        return "Base not suported";
        }
        while(N>0)
        {
            int rem= N%B;
            res=digits[rem] + res;
            N/=B;
        }
        return res;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends