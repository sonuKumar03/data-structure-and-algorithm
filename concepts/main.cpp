#include<bits/stdc++.h>
using namespace std;


int main(){
	int n ;
	cin>>n;
	vector<int> ar;
	vector<int>prefix_sum(n,0);
	for(int i =0;i<n;i++){
		int a;
		cin>>a;
		ar.push_back(a);
	}
	prefix_sum[0]=ar[0];
	for(int i=1;i<n;i++){
		prefix_sum[i]=prefix_sum[i-1]+ar[i];
	}

	for(auto a:prefix_sum){
		cout<<a<<" ";
	}
	cout<<endl;
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<prefix_sum[b]-prefix_sum[a-1]<<endl;
	}
	cout<<endl;
	return 0;
}


void subsetv1(vector<int>  ar,int i,vector<int>pr){
	if(i==ar.size()){
		for(auto a:pr){
			cout<<a<<" ";
		}
		cout<<endl;
	}else{
		pr.push_back(ar[i]);
		subsetv1(ar,i+1,pr);
		pr.pop_back();
		subsetv1(ar,i+1,pr);
	}
}

void subsetv2(vector<int> ar){
	long long int n = pow(2,ar.size());
	for(int i =0;i<n;i++){
		vector<int> tr;
		for(int j =0;j<ar.size();j++){
			if((i & (1<<j))!=0){
				tr.push_back(ar[j]);
			}
		}
		for(auto a:tr){
			cout<<a<<" ";
		}
		cout<<endl;		
	}
}
int t = 0;
void permutation(vector<int>ar,vector<int>pr,vector<bool>chosen){
	if(ar.size()==pr.size()){
		t++;
	}else{
		for(int i =0;i<ar.size();i++){
			if(chosen[i])continue;
			chosen[i]=true;
			pr.push_back(ar[i]);
			permutation(ar,pr,chosen);
			chosen[i]=false;
			pr.pop_back();
		}
	}
}
