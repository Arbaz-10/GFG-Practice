//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n){

    // long long max = a[0], min = a[0];
    // for(long long i=0; i<n; i++){
    //     if(a[i] > max)   max = a[i];
    //     else if(a[i] < min)  min = a[i];
    // }
    // pair<long long, long long> p;
    // p.first = min;
    // p.second = max;
    // return p;


    // pair<long long, long long> p;
    // p.first = *min_element(a, a+n);
    // p.second = *max_element(a, a+n);
    // return p;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}