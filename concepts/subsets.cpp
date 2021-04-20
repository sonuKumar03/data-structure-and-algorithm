#include<bits/stdc++.h>
using namespace std;
int even_count;
void permute(int *ar, int i ,int n , vector<int>pr){
	if(i==n-1){
		int t = 0;
		for(auto a:pr){
			t+=a;
		}
		if(t>5){
			for(auto a:pr){
				cout<<a<<" ";
			}
		}
		cout<<endl;
	}else{
		pr.push_back(ar[i]);
		permute(ar,i+1,n,pr);
		pr.pop_back();
		permute(ar,i+1,n,pr);
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int ar[] = {1,2,3,4,5};
	vector<int> pr;
	permute(ar,0,5,pr);
	return 0;
}

