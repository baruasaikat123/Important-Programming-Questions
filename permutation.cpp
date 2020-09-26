//Permutation of string
//Time Complexity:  O(n*n!) 
//Note that there are n! permutations and 
//it requires O(n) time to print a a permutation.
#include<bits/stdc++.h>
using namespace std;
unordered_set<string> h;
void permutation(string s,int x,int y){

	if(x==y){
        if(h.find(s)==h.end()){

        	cout << s <<endl;
        }
		h.insert(s);
		return;
	}
	for(int i=x;i<=y;i++){

		swap(s[x],s[i]);
		permutation(s,x+1,y);
		swap(s[x],s[i]);

	}
}
int main(){

	#ifndef ONLINE_JUDGE

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	#endif

	string s;
	cin >> s;

	permutation(s,0,s.length()-1);

	return 0;
}


