#include <iostream>
#include<vector>
using namespace std;
typedef long long ll;

int largest(int *ar ,int i,int j){
	int max ;
	if(i==j){
		return ar[i];
	}
	else{
		max = largest(ar,i+1,j);
		if(ar[i]>=max){
			return ar[i];
		}
		return max;
	}
}

int main(){
	int n ;
	cin>>n;
	int *ar = new int[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	cout<<largest(ar,0,n);
	return 0 ;
}

