#include<iostream>
using namespace std;
int up(char **ar ,int n,int i  , int j){
	if(j>=0){
		return 0;
	}
	if(ar[i][j]=='*'){
		return 1;
	}
	return up(ar,n,i,j-1);
}

int down(char **ar ,int n,int i  , int j){
	if(j<n){
		return 0;
	}
	if(ar[i][j]=='*'){
		return 1;
	}
	return down(ar,n,i,j+1);
}
int left(char **ar ,int n,int i  , int j){
	if(j>=0){
		return 0;
	}
	if(ar[i][j]=='*'){
		return 1;
	}
	return left(ar,n,i-1,j);
}

int right(char **ar ,int n,int i  , int j){
	if(i<n){
		return 0;
	}
	if(ar[i][j]=='*'){
		return 1;
	}
	return right(ar,n,i+1,j);
}



void solve(){
	int n ;
	cin>>n;
	char **ar = new char*[n];
	for(int i =0;i<n;i++){
		ar[i]= new char[n];
	}
	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			cin>>ar[i][j];
		}
	}
	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			if((up(ar,n,i,j)+down(ar,n,i,j)+left(ar,n,i,j)+right(ar,n,i,j))>0){
				ar[i][j]='*';
			}
		}
	}

	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}