// Print max element of all contiguous subarray of size k:
#include<bits/stdc++.h>
using namespace std;
int main(){


	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif

	int n,k,x;
	cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;i++){

		cin >> x;
		v.push_back(x);
	}
	deque<int> q;
	vector<int> ans;
	for(int i=0;i<v.size();i++){

		while(!q.empty() &&  q.front() < i-k+1){

			q.pop_front();
		}
		while(!q.empty() && v[q.back()]<v[i]){

			q.pop_back();
		}
		q.push_back(i);
		if(i>=k-1){

			ans.push_back(v[q.front()]);
		}
	}
	for(int i=0;i<ans.size();i++){

		cout << ans[i] << " ";
	}

	return 0;
}