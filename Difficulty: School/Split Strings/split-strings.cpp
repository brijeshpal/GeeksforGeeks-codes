//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    {
        string S1;
        string S2;
        string S3;
        vector<string> sum;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]>='A' && S[i]<='Z' || S[i]>='a' && S[i]<='z')
            {
                S1+=S[i];
            }
            else if(S[i]>='0' && S[i]<='9')
            {
                S2+=S[i];
            }
            else
            {
                S3+=S[i];
            }
        }
        sum.push_back(S1);
        sum.push_back(S2);
        sum.push_back(S3);
        return sum;
        
        // code here 
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends