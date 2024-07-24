//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    string str;
	    for(int i=0; i<S.length(); i++)
	    {
	        if(S[i]>='A' && S[i]<='Z') 
	        {
	            continue;
	        }
	        else if(S[i]>='a' && S[i]<='z')
	        {
	            continue;
	        }
	            
	        else if(S[i]>='0' && S[i]<='9')
	        {
	            
	            str+=S[i];
	        }
	    }
	    return str;
	    // Your code goes here
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends