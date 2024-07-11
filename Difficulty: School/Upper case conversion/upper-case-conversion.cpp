//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    bool newWord = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (isspace(s[i])) {
            newWord = true;
        } else if (newWord) {
            s[i] = toupper(s[i]);
            newWord = false;
        } else {
            s[i] = tolower(s[i]);
        }
    }
    
    return s;
    // code here
}