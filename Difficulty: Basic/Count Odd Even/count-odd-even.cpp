//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    vector<int> countOddEven(vector<int> &arr) {
        int even=0,odd=0;
        vector<int> v;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]%2!=0)
            {
                 odd++;
            }
            else
            {
                even++;
            }
        }
        v.push_back(odd);
        v.push_back(even);
        return v;
        // your code here
    }
};

//{ Driver Code Starts.
int main() {

    // Testcase input
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        vector<int> res = ob.countOddEven(arr);
        for (auto t : res) {
            cout << t << " ";
        }
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends