#include<iostream>
using namespace std;
typedef long long ll;
ll dp[9][4];
int sum(ll n){
	if(n<=9){
		return 1;
	}
	int i = 1;
	while(n>=10){
		i++;
		n = n/10;
	}
	return i;
}
void solve(){
	ll n;
	cin>>n;
	int f = 0;
	ll s = 1 ;
	if(n==1){
		cout<<1<<endl;
		return ;
	}
	for(int i =1;i<=9;i++){
		for(int   j =1;j<=4;j++){
			s = s+sum(dp[i-1][j-1]);
			if(dp[i-1][j-1]==n){
				f= 1;
				break;
			}
		}
		if(f==1){
			break;
		}
	}
	cout<<s<<endl;
}
int main(){
	int t;
	for(int i =1;i<=9;i++){
		ll floor =i;
		for(int   j =1;j<=3;j++){
			floor = floor*10+i;
			dp[i-1][j-1]=floor;
		}
	}
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}