//Permutation using C++ STL
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	#endif

	string s;
	cin >> s;
	sort(s.begin(),s.end());
	do{

		cout << s << endl;

	}while(next_permutation(s.begin(),s.end()));

	return 0;
}