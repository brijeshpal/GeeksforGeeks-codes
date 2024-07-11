//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            string str;
            
            for(char c : s)
            {
                if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
                {
                 str+=c;   
                }
                
                
            }
            int strIndex=str.length()-1;
            for(int i=0; i<s.length(); i++)
            {
                
                    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                    {
                        s[i]=str[strIndex--];
                    }
                
                
            }
            return s;
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends