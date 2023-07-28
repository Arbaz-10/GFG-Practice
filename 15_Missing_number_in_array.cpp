/*
Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {

        // int ans = 0;
        // for(int i=0; i<n-1; i++)  ans += array[i];
        // return (n*(n+1))/2 - ans;


        // sort(array.begin(), array.end());
        // for(int i=0; i<array.size(); i++){
        //     if(array[i] == (i+1))  continue;
        //     else  return i+1;
        // }
    }
};



int main() {
    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}