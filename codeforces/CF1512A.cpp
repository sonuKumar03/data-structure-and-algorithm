#include<iostream>
using namespace std;
int solve(){
	int n ;
	cin>>n;
	int *br = new int[101];
	int *ar = new int[101];
	for(int i=0;i<101;i++){
		br[i]=0;
	}
	int a;
	for(int i =0;i<n;i++){
		cin>>a;
		ar[i]=a;
		br[a]++;
	}
	int el ;
	for(int i =0;i<101;i++){
		if(br[i]!=0 && br[i]==1){
			el = i;
		}
	}
	for(int i =0;i<n;i++){
		if(el==ar[i]){
			return i+1;
		}
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
	return 0;
}