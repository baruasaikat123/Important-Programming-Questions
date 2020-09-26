// Kadane's Algorithm 
//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
// Time Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(int arr[],int n){

	int max_sum = INT_MIN, current_sum = 0;
	for(int i=0;i<n;i++){

		current_sum += arr[i];
		max_sum = max(current_sum, max_sum);
		if(current_sum<0){

			current_sum = 0;
		}
	}
	return max_sum;

}
int main(){

	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
	#endif

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){

    	cin >> arr[i];
    }
    int max_sum = max_sum_subarray(arr,n);
    cout << max_sum;

    return 0;

}