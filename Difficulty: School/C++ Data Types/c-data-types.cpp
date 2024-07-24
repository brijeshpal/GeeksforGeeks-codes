//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        int n;
        cin>>n;
        return n;
        // code here
    }
    
    char cppCharType() {
        char n;
        cin>>n;
        return n;
        // code here
    }
    
    float cppFloatType() {
        float n;
        cin>>n;
        return n;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends