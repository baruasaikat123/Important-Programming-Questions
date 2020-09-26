#include<bits/stdc++.h>
using namespace std;
int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n, x;
	cin >> n;
	vector<long long int> v;
	for(int i=0;i<n;i++){
        
        cin >> x;
		v.push_back(x);
	}
    vector<long long int> p(n);
    int l = v[0];
    p[0] = 1;
    for(int i=1;i<n;i++){

    	p[i] = l;
    	l *= v[i];
    }
    int r = v[n-1];
    for(int i=n-2;i>=0;i--){

    	p[i] *= r;
    	r *= v[i];
    }
    for(int i=0;i<n;i++){

    	cout << p[i] << " ";
    }

	return 0;
}