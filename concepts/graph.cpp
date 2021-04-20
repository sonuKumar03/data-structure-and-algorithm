#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>>graph;
vector<bool> visited;
void bfs (int source){
	queue<int> queue;
	vector<bool>visited (graph.size());
	visited[source]=true;
	queue.push(source);
	while(!queue.empty()){
		int t = queue.front();
		queue.pop();
		cout<<t<<" ";
		for(vector<int>::iterator  it = graph[t].begin();it!=graph[t].end();it++){
			if(!visited[*it]){
				visited[*it]=true;
				queue.push(*it);
			}
		}
	}
}
void dfs(int source){
	visited[source]=true;
	cout<<source<<" ";
	for(vector<int>::iterator it= graph[source].begin();it!= graph[source].end();it++){
		if(!visited[*it]){
			dfs(*it);
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	visited= vector<bool>(n,false);
	graph = vector<vector<int>>(n);
	int u,v;
	for(int i =0;i<m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}	
	bfs(0);
}