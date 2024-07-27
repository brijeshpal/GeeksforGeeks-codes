//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	vector<long long int> find(int l, int b, int h)
	{
	    vector<long long int>v;
	    v.push_back((long long)2*((long long)b*h+(long long)h*l+(long long)l*b));
	    v.push_back((long long)l*b*h);
	    return v;
	    // Code here
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int l, b, h;
		cin >> l >> b >> h;
		Solution ob;
		vector<long long int> ans = ob.find(l, b, h);
		for(auto i: ans)cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends