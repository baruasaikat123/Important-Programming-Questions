// Find the max sum of any contiguous subarray of size k:
// Sliding Window Approach
// Time Complexity: O(k+n) ~ O(n)
#include<bits/stdc++.h>
using namespace std;
int getMaxSum(int arr[],int n,int k){

	int window_sum = 0, max_sum = 0;
	for(int i=0;i<k;i++){

		window_sum += arr[i];
	}
	for(int i=k;i<n;i++){

		window_sum += arr[i]-arr[i-k];
		max_sum = max(window_sum,max_sum);
	}
	return max_sum;
}
int main(){

	#ifndef ONLINE_JUDGE
      
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);

	#endif

    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){

    	cin >> arr[i];
    }
    int max_sum = getMaxSum(arr,n,k);
    cout << max_sum;

    return 0;
}