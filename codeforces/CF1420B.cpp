#include <iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
typedef long long ll;
void print(ll *ar,int n){
	for(int i =0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

void solve(){
	ll n ;
	cin>>n;
	ll *ar = new ll[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}

	bool *dp = new bool[n];
	for(int i=0;i<n;i++)
		dp[i]=false;
	int count =0;

	for(int i=0;i<n;i++){
		for(int j =i+1;j<n;j++){
			if((ar[i]&ar[j])>=(ar[i]^ar[j]) && !dp[i] &&!dp[j]){
				dp[i]=true;
				dp[j]=true;
				count++;
			}
		}
	}
	cout<<count<<endl;	
}

int main() {
	int n ;
	cin>>n;
	while(n--){
		solve();
	}
	return 0;
}
