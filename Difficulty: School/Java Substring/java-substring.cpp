//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string javaSub(string S, int L, int R) {
        string str;
        for(int i=L; i<=R; i++)
        {
            str+=S[i];
        }
        return str;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.javaSub(S, L, R) << endl;
    }
    return 0;
}

// } Driver Code Ends