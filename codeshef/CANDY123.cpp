#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
	int a,b;
	cin>>a>>b;
	int candies = 1;
	int player = 1;
	while(true){
		if(player==1){
			a-=candies;
			player=2;
		}else{
			b-=candies;
			player=1;
		}
		candies++;
		if(a<0 || b<0){
			break;
		}
	}
	if(player==1){
		cout<<"Limak\n";
	}else{
		cout<<"Bob\n";
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