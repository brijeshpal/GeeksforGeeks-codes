//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getCompundInterest(int P, int T , int N , int R) {
        return P*pow((1+(R/100.0)/N),N*T);
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int P,T,N,R;
        
        cin>>P>>T>>N>>R;

        Solution ob;
        cout << ob.getCompundInterest(P,T,N,R) << endl;
    }
    return 0;
}
// } Driver Code Ends