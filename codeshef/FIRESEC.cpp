#include <iostream>
#include<vector>
using namespace std;
typedef long long int ll;
vector<bool> visited;
int connectedComponent;

void dfs(vector<vector<int>>list,int source){
    visited[source]=true;
    connectedComponent++;
    for(vector<int>:: iterator it = list[source].begin();it!=list[source].end();it++){
        if(visited[*it]==false){
            dfs(list,*it);
        }
    }   
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<int>> list(n);
   
    visited = vector<bool>(n,false);
    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        list[u-1].push_back(v-1);
        list[v-1].push_back(u-1);
    }
    int res = 0;
    for(int i=0;i<n;i++){
         connectedComponent = 0;
        if(!visited[i]){
            res++;
            dfs(list,i);
        }
    }
    cout<<res<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
