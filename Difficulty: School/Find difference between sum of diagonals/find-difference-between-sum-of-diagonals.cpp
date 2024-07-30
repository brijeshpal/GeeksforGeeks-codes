//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int psum=0;
        int ssum=0;
        int diff;
        //vector<int> v;
        //int v;
        
        for(int i=0; i<N; i++)
        {
            psum+=Grid[i][i];
            ssum+=Grid[i][N-i-1];
            diff=abs(psum-ssum);
        }
        //v.push_back(diff);
        return diff;
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
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends