//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
       vector<string>v;
       for(int j=1; j<=N; j++)
       {
           string s="";
           for(int i=1; i<=j; i++)
           {
               s+=to_string(i);
           }
           for(int i=j-1; i>0; i--)
           {
               s+=to_string(i);
           }
           v.push_back(s);
       }
       ;
       return v;
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
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends