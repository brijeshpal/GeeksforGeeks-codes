#User function Template for python3

class Solution:
	def find_median(self, v):
		# Code here
		v.sort()
		n=len(v)
		if(n%2==0):
		
		   # med=(v[n//2] + v[n//2+1])//2
		   med=(v[n//2] + v[n//2-1])//2
		
		else:
		
		    med=v[n//2]
		
		return med
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		v = list(map(int,input().split())) 
		ob = Solution();
		ans = ob.find_median(v)
		print(ans)
# } Driver Code Ends