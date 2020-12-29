#include<iostream>
#include<queue>
#include <algorithm>
typedef long long ll;
using namespace std;
ll min_clicks(ll n,ll m){       
	ll d =0;

	queue<ll> _queue = queue<ll>();
	vector<bool>visited = vector<bool>(100200,false);
	vector<ll>distance=vector<ll>(100200,false);
	distance[n]=0;
	_queue.push(n);
	while(!_queue.empty()){
		ll f = _queue.front();
		_queue.pop();
		visited[f]=true;
		if(!visited[f-1] && f-1>0){
			_queue.push(f-1);
			visited[f-1]=true;
			distance[f-1]=distance[f]+1;
		}
		if(!visited[f*2]&& f<m){
			_queue.push(f*2);
			visited[f*2]=true;
			distance[f*2]=distance[f]+1;
		}
	}
	return distance[m];
}

void solve(){
	ll n,m;
	cin>>n>>m;
	cout<<min_clicks(n,m)<<endl;
}
int main(){
	solve();
	return 0;
}