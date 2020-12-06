#include<iostream>
#include<math.h>
using namespace std;
#define infinity 1000000000;

int dp[1000000];

int minCoinDp(int *ar , int n , int m){
	if(dp[m]!=-1){
		return dp[m];
	}
	if(m==0){
		return 0;
	}
	int res = infinity;
	for(int i =0;i<n;i++){
		if(ar[i]<=m){
			int sub_res = 1 + minCoinDp(ar,n,m-ar[i]);
			if(sub_res<res){
				res = sub_res;
			}
		}
	}
	dp[m]=res;
	return res;
}

void minCoin (){
	int n ;
	cin>>n;
	int *ar = new int[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	int coins = minCoinDp(ar,n,100000);
	cout<<coins<<endl;
}

void solve(){
	minCoin();
}



int  main(){

	for(int  i=0;i<1000000;i++){
		dp[i]=-1;
	}

	solve();
	return 0;
}