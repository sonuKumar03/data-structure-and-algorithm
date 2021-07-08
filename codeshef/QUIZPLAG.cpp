#include <bits/stdc++.h>
using namespace std;

 void solve(){
        int n,m,k;
	    cin>>n>>m>>k;
	   	vector<int> ar;
	   	for(int i =0;i<k;i++){
	   		int a;
	   		cin>>a;
	   		ar.push_back(a);
	   	}
	   	map<int,int> _map ;
	   	for(int i =0;i<k;i++){
	   		if(ar[i]<=n){
	   			map<int,int >::iterator it  = _map.find(ar[i]);
	   			if(it != _map.end()){
	   				it->second = it->second + 1;
	   			}else{
	   				_map.insert(make_pair(ar[i],1));
	   			}
	   		}
	   	}
	   	vector<int> plagers ;

	   	for(map<int,int>::iterator it = _map.begin() ; it !=_map.end();it++){
	   		if(it->second > 1){
	   			plagers.push_back(it->first);
	   		}
	   		// cout<<it->first<<", "<<it->second<<"\t";
	   	}
	   	cout<<plagers.size();
	   	for(auto a:plagers){
	   		cout<<" "<<a<<" ";
	   	}
	   	cout<<endl;
 }

int main() {
	int t;
	cin>>t;
	while(t--){
	  solve();
	}
	return 0;
}
