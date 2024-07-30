//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    string change;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            change += 'Z' - (c - 'A');
        } else if (c >= 'a' && c <= 'z') {
            change += 'z' - (c - 'a');
        } else {
            change += c; // Leave non-alphabetic characters unchanged
        }
    }
    return change;
}
    // code here.
