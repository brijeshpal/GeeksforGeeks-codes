//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void relationalOperators(int A,int B)
    {
        if(A>B)
        {
           cout<<A<<" is greater than "<<B<<endl; 
        }
        else if(A<B)
        {
            cout<<A<<" is less than "<<B<<endl;
        }
        else
        {
            cout<<A<<" is equals "<<B<<endl;
        }
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
        int A,B;
        cin >> A >> B;

        Solution ob;
        ob.relationalOperators(A,B);
    }
    return 0;
}
// } Driver Code Ends