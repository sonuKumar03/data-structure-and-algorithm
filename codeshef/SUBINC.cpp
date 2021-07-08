#include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		ll n,a;
 		cin>>n;
 		vector<ll>ar;
 		for(int i =0;i<n;i++){
 			cin>>a;
 			ar.push_back(a);
 		}
 		for(auto a:ar){
 			cout<<a<<" ";
 		}	
 		cout<<endl;
 	}
 	return 0;
 }