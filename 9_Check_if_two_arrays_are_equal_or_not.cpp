/*
Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public: 
    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        if(A == B)  return 1;
        else  return 0;
    }
};


int main()
 {
    int t;  cin>>t;
    while(t--) {
        int n;  cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)  cin >> arr[i];
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)  cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}