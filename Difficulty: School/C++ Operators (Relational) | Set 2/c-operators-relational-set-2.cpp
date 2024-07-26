//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string compareNum(int A,int B){
        string s1=to_string(A);
        string s2=to_string(B);
        if(A>B)
        {
            string temp=s1+" is greater than "+s2;
            return temp;
        }
        else if(A<B)
        {
            string temp=s1+" is less than "+s2;
            return temp;
        }
        else
        {
            string temp=s1+" is equals to "+s2;
            return temp;
        }
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
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends