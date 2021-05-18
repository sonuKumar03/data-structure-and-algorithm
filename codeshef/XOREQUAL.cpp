#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;
	cin>>n;
	int l = 2 << n-1;
	cout<<l<<endl;
	// vector<int>ar;
	// for(int x =0;x<=l-1;x++){
	// 	int left = x^(x+1);
	// 	int right = (x+2)^(x+3);
	// 	if(left==right){
	// 		ar.push_back(x);
	// 	}
	// }

	// for(auto a:ar){
	// 	cout<<a<<" ";
	// }

	// cout<<ar.size()<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

