#include<iostream>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int *ar = new int[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	int ans = 1;
	int max_speed = ar[0];
	for(int i =1;i<n;i++){
		if(max_speed>=ar[i]){
			ans++;
			max_speed=ar[i];
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}