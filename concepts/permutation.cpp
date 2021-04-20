#include<bits/stdc++.h>
using namespace std;
vector<int> ar;
vector<int>pr;
vector<bool>chosen;
void  permutation(){
	if(ar.size()==pr.size()){
		int sum=0;
		bool flag = true;
		for(int i =0;i<pr.size()-1;i++){
			if(pr[i]>pr[i+1]){
				flag = false;
			}
		}	
		if(flag){
			for(auto a:pr){
				cout<<a<<" ";
			}
		}
	}else{
		for(int i =0;i<ar.size();i++){
			if(chosen[i]==true)continue;
			chosen[i]=true;
			pr.push_back(ar[i]);
			permutation();
			chosen[i]=false;
			pr.pop_back();
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ar = vector<int>({1,2,3,4});
	chosen = vector<bool>(ar.size(),false);
	permutation();
	return 0;
}