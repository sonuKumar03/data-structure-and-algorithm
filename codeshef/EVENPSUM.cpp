#include<iostream>
using namespace std;
typedef long long ll;

void even_count(int x,int y){
		
}

void solve(){
	ll x,y;
	cin>>x>>y;
	ll count =0;
	ll small  = x>=y?y:x;
	ll big = x>=y?x:y;
	count = big - small;
	for(int i=2;i<=small;i++){
		count +=(big-small)/i;
	}
	cout<<count<<endl;
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}