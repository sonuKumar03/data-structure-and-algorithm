#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll _INFINITY = 1000000007;
vector< vector<int> >graph;
vector< vector<bool> >visited;
void solve(){
	int n;
	cin>>n;
	graph = vector<vector<int>>(n);
	for(int i =1;i<n;i++){
		int u,v;
		cin>>u>>v;
		u--;
		v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
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