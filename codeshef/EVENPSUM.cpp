#include<iostream>
using namespace std;
typedef long long ll;

void even_count(int x,int y){
		
}

void solve(){
	ll x,y,count;
	cin>>x>>y;
	ll even_1 = x/2;
	ll even_2 = y/2;

	ll odd_1,odd_2;

	if(x%2==0){
		odd_1 = x/2;
	}else{
		odd_1 = x/2+1;
	}
	if(y%2==0){
		odd_2 = y/2;		
	}else{
		odd_2 = y/2+1;
	}

	count = (even_1*even_2) + (odd_1*odd_2);
	cout<<count<<endl;
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}