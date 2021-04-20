#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool f(int a,int b){
	return a-b;
}

void solve(){
	ll n;
	cin>>n;
	int *ar = new int[n];
	int sum =0;
	for(int i =0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	int ans  = sum;
	for(int i =0;i<n;i++){
		int k = max(ar[i],sum-ar[i]);
		ans = min (ans,k);
	}

	for(int i =0;i<n;i++){
		for(int j =i+1;j<n;j++){
			int t = ar[i]+ar[j];
			int  k = max(t,sum-t);
			ans = min(ans,k);
		}
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}