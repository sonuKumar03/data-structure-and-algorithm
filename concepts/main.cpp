#include<bits/stdc++.h>
using namespace std;
vector<int> ar,pr;
vector<bool>chosen;
bool found;
void permutation(){
	if(ar.size()==pr.size()){
		bool  f = true;
		for(int i = 0 ;i<pr.size()-1;i++){
			if(abs(pr[i]-pr[i+1])>=2 && abs(pr[i]-pr[i+1]<=4)){
				f = false;
				break;
			}
		}
		if(f){
			found=true;
			for(auto a :pr){
				cout<<a+1<<" ";
			}
			cout<<"\n";
		}
	}
	else {
		for(int i=0;i<ar.size();i++){
			if(chosen[i])continue;
			chosen[i]=true;
			pr.push_back(ar[i]);
			if(!found)
				permutation();
			pr.pop_back();
			chosen[i]=false;
		}
	}
}
void solve(){
	int n ;
	cin>>n;
	ar = vector<int>();
	pr = vector<int>();
	found = false;
	chosen = vector<bool>(n,false);
	for(int i =0;i<n;i++){
		ar.push_back(i);
	}
	permutation();
	if(!found){
		cout<<"NO SOLUTION\n";
	}
}
int main(){
	int t ;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}