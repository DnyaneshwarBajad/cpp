//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{ 
    int i;
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum =0;
        int sum1 =n*(n+1)/2;
        for(i=0;i<n-1;i++)
        {
          sum +=array[i];
            
            
        }
        return sum1-sum;}
};

//2nd method xor method 
/*int i ;
for(i=0;i<n-1;i++)
int XOR =0;
xor =xor^(i+1)
return i;
*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends