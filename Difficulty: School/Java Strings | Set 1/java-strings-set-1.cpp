//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        
        string str,str1;
        str= S1+S2;
        for(int i=str.length(); i>=0; i--)
        {
            str1+=str[i];
        }
        return str1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends