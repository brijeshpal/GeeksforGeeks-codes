//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n=arr.size();
        int l=0,h=(n-1);
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(k==arr[mid])
            {
                return mid;
            }
            else if(k<arr[mid])
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
                
            }
            
        }
        return -1;
        
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends