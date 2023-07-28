/*
Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        for(int i=0; i<n-1; i++){
            if(i%2 == 0){
                if(arr[i] > arr[i+1])  swap(arr[i], arr[i+1]);
            }else{
                if(arr[i] < arr[i+1])  swap(arr[i], arr[i+1]);
            }
        }
    }
};


bool isZigzag(int arr[], int n){
    int f=1;
    
    for(int i=1; i<n; i++){
        if(f){
            if(arr[i-1]>arr[i]) return 0;
        }
        else{
            if(arr[i-1]<arr[i]) return 0;
        }
        f=f^1;
    }
    
    return 1;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        bool check=1;
        check=isZigzag(arr,n);
        
        if(check) cout<<"1\n";
        else cout<<"0\n";
        
    }
    return 0;
}