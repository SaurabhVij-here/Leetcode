//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:


    int count(vector<int> &row)
    {
        int cnt=0;
        for(int i=0;i<row.size();i++)
        {
            if(row[i]==1)
            cnt++;
        }
        return cnt;
    }



	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   
	   vector<int> temp(n);
	   
	   for(int i=0;i<n;i++)
	   {
	       int amt=count(arr[i]);
	       temp[i]=amt;
	   }
	   
	   int index=-1;
	   int maxi=INT_MIN;
	   
	   for(int i=0;i<temp.size();i++)
	   {
	       if(temp[i]>0 && temp[i]>maxi)
	       {
	           maxi=temp[i];
	           index=i;
	       }
	   }
	   
	   return index;
	   
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends