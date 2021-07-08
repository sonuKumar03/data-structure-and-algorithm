#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 10000009
vector<int>menus;
vector<int>dp(100002,-1);
int f(int p){
	if(p==0){
		return 0;
	}
	if(p<0){
		return INF;
	}
	if(dp[p]!=-1)
		return dp[p];

	int best = INF;
	for(auto  a:menus){
		best = min(best,f(p-a)+1);
		dp[p]=best;
	}
	return best;
 }

void solve(){
	ll sum;
	cin>>sum;
	int t = f(sum);
	cout<<t<<endl;
}	
int main(){
	int t;
	cin>>t;
	for(int i =11;i>=0;i--){
		menus.push_back(pow(2,i));
	}
	dp[0]=0;
	dp[1]=1;
	while(t--){
		solve();
	}
	return 0;
}
