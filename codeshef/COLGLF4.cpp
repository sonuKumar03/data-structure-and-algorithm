#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

vector<vector<pair<int , int>>>adj = vector<vector<pair<int,int>>>(1000000);
void fillGraph(int eggs, int chocobars, int omelettePrice,int milkShakePrice,int cakePrice){
	printf("%d %d\n", eggs,chocobars);
	if(eggs-2>=0){
		adj[eggs-2].push_back(make_pair(chocobars,omelettePrice));
		fillGraph(eggs-2,chocobars,omelettePrice,milkShakePrice,cakePrice);
	}
	if(chocobars-3>=0){
		adj[chocobars-3].push_back(make_pair(eggs,milkShakePrice));
		fillGraph(eggs-3,chocobars,omelettePrice,milkShakePrice,cakePrice);
	}
	if(eggs-1>=0 && chocobars-1>=0){
		adj[eggs-1].push_back(make_pair(chocobars-1,cakePrice));
		adj[chocobars-1-1].push_back(make_pair(eggs-1,cakePrice));
		fillGraph(eggs-1,chocobars-1,omelettePrice,milkShakePrice,cakePrice);
	}
}

void solve(){
	ll eggs,chocobars, friends,omelettePrice,cakePrice,milkShakePrice;
	cin>>friends>>eggs>>chocobars>>omelettePrice>>milkShakePrice>>cakePrice;
	fillGraph(eggs,chocobars,omelettePrice,milkShakePrice,cakePrice);
	
	for(auto& inner : adj) {
    	for(auto& item : inner) {
    		cout<<item.first<<" "<<item.second<<" ";
    	}
    	cout<<endl;
	}

}
int main(){
	ll t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}


