#include<iostream>
using namespace std;
typedef long long ll;

void solve(){
	ll n;
	cin>>n;
	ll *ar = new ll[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	ll m ;
	cin>>m;

	ll *br = new ll[m];
	for(int i =0;i<m;i++){
		cin>>br[i];
	}
	ll *dp = new ll[10000000];
	for(int i =0;i<n;i++){
		dp[ar[i]]=i+1;
	}

	ll a1 = 0;
	ll a2 = 0; 
	for(int i =0;i<m;i++){
		a1+=dp[br[i]];
		a2+=n-dp[br[i]]+1;
	}
	cout<<a1<<" "<<a2<<endl;

}
int main(){
	solve();
}