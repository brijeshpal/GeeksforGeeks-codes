//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
    string change;
    for (char c : S) {
        if (c >= 'A' && c <= 'Z') {
            change += 'Z' - (c - 'A');
        } else if (c >= 'a' && c <= 'z') {
            change += 'z' - (c - 'a');
        } else {
            change += c;
        }
    }
    return change;
        // Write Your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends