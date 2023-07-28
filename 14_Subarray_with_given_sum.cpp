/*
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0, j=0;
        long long curr_sum = 0;
        while(j < n){
            curr_sum += arr[j];
            while(curr_sum>s && j>i){
                curr_sum -= arr[i];
                i++;
            }
            if(curr_sum == s)  return {i+1, j+1};
            j++;
        }
        return {-1};
    }
};



int main()
 {
    int t; cin>>t;
    while(t--)
    {
        int n; long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++) cin>>arr[i];
        
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}