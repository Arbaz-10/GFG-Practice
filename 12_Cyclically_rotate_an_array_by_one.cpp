/*
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/


#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){
    // int i=n-1, j=i-1;
    // while(i>=0 && j>=0){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i--;
    //     j = i-1;
    // }


    for(int i=0; i<n; i++){
        swap(arr[i], arr[n-1]);
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}