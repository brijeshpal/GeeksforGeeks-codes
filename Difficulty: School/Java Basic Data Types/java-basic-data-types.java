//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            Solution ob = new Solution();
            System.out.println(ob.javaIntType(sc));
            System.out.println(ob.javaStringType(sc));
            System.out.println(ob.javaFloatType(sc));
        }
    }
}
// } Driver Code Ends


class Solution {

    int javaIntType(Scanner sc) {
        int n= sc.nextInt();
        return n;
        
        // code here
    }
    
    String javaStringType(Scanner sc) {
        String str=sc.next();
        return str;
        // code here
    }
    
    float javaFloatType(Scanner sc) {
        float n=sc.nextFloat();
        return n;
        // code here
    }
};