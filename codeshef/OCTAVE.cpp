#include<iostream>
typedef long long ll ;
using namespace std;

void solve(){
	cout<<"hi";
	ll n;
	cin>>n;
	ll *ar = new ll[n];
	ll *dp = new ll[1000000];
	for(int i =0;i<100000;i++){
		dp[i]=0;
	}
	for(int i =0;i<n;i++){
		cin>>ar[i];
		dp[i]++;
	}

	for(int i =0;i<1000000;i++){
		if(dp[i]!=0){
			cout<<dp[i]<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}