// input: 1002     Replace all 0's by 5.
// output: 1552
// Time Complexity: O(K), K is the number of digits in N.
// Space Complexity: O(1), without any extra space. 
#include<bits/stdc++.h>
using namespace std;
int convert(int n){

	if(n==0){

		return 0;
	}
	int r = n%10;
	if(r == 0){

		r = 5;
	}
	return convert(n/10)*10+r;
}
int main(){

	#ifndef ONLINE_JUDGE      
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
	#endif

    int n;
    cin >> n;

    if(n==0){

        cout << 5;
    }
    else{

        int ans = convert(n);
        cout << ans;
    }

    return 0;
}