#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int knapsack(int W,int w[],int val[],int n){
	if(n==0 || W==0){
		return 0;
	}
	if(w[n-1]>W){
		return knapsack(W,w,val,n-1);
	}
	else {
		return max(val[n-1] + knapsack(W-w[n-1],w,val,n-1),knapsack(W,w,val,n-1));
	}
}
int knapsack_memo(int w, int wt[],int val[],int n, int **dp){
	if(n<0){
		return 0;
	}
	if(w==0 || n==0){
		return 0;
	}

	if(dp[n][w]!=-1){
		return dp[n][w];
	}

	if(w<wt[n-1]){
		dp[n-1][w] = knapsack_memo(w,wt,val,n-1,dp);
		return dp[n-1][w];
	}else{
		dp[n-1][w] = max (val[n-1] +  knapsack_memo (w-wt[n-1],wt,val,n-1,dp) , knapsack_memo(w,wt,val,n-1,dp));
		return dp[n-1][w];
	}
}
int main(){

	int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    int **dp = new int*[n];
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    cout << knapsack_memo(W, wt, val, n-1,dp)<<endl;
    cout << knapsack(W, wt, val, n-1)<<endl;
	return 0;
}