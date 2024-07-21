//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            int u=0,l=0,d=0,s1=0;
        for(int i=0; i<s.length(); i++)
        {
            if(islower(s[i]))
            {
                l++;
            }
            else if(isupper(s[i]))
            {
                u++;
            }
            else if(isdigit(s[i]))
            {
                d++;
            }
            else
            {
                s1++;
            }
            
        }
        vector <int> ans;
        ans.push_back(u);
        ans.push_back(l);
        ans.push_back(d);
        ans.push_back(s1);
        return ans;
            
            //code here.
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends