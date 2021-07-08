#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>graph;
vector<bool>visited;
void print(){
	int i = 1;
	for(auto g:graph){
		cout<<i<<" ";
		for(auto a:g){
			cout<<(a+1)<<" ";
		}
		cout<<endl;	
		i++;
	}
}
void dfs(int s ){
	visited[s]=true;
	cout<<(s+1)<<" ";
	for(auto a : graph[s]){
		if(!visited[a]){
			dfs(a);
		}
	}
}
void solve(){
	int n;
	cin>>n;
	graph = vector<vector<int>>(n);
	visited = vector<bool>(n,false);
	for(int i =1;i<=n-1;i++){
		int u,v;
		cin>>u>>v;
		u--;
		v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	int q ;
	cin>>q;
	vector<int> vertices;
	while(q--){
		int k;
		cin>>k;
		vertices = vector<int>(k);
		for(int i =0;i<k;i++){
			cin>>vertices[i];
		}
		visited = vector<bool>(n);
		for(auto a : vertices){
			a--;
			// dfs(a);
			// cout<<endl;
		}
	}
	print();
}

int main(){
	int t ;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}