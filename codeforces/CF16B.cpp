#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;


void print(ll **ar,ll n){
	for(int i =0;i<n;i++){
		for(int j =0;j<2;j++){
			cout<<ar[i][j]<<"";
		}
		cout<<endl;
	}
}

void solve(){
	ll bagCapacity ,containers;
	cin>>bagCapacity>>containers;	
	ll **matches = new ll*[containers];
	for(int i =0;i<containers;i++){
		matches[i] = new ll[2];
	}


	for(int i =0;i<containers;i++){
		for(int j =0;j<2;j++){
			cin>>matches[i][j];
		}
	}
	// sorting the matches;
	for(int i =0;i<containers;i++){
		for(int j =1;j<containers-i;j++){
			if(matches[j][1] > matches[j-1][1]){
				ll  t = matches[j][0];
				ll t2 = matches[j][1];
				matches[j][0]  = matches[j-1][0];
				matches[j][1] = matches[j-1][1];
				matches[j-1][0] = t;
				matches[j-1][1] = t2;
			}
		}
	}
	// print(matches,containers);.

	ll sum = 0;
	// 
	int  i =0;
	while(bagCapacity>0 && i < containers){
		if(matches[i][0]<=bagCapacity){
			bagCapacity = bagCapacity - matches[i][0];
			sum = sum + matches[i][0]*matches[i][1];
			// cout<<matches[i][0]<<" "<<matches[i][1]<<endl;
		}else{
			sum = sum + matches[i][1]*bagCapacity;
			bagCapacity  = 0;
		}
		i++;
	}
	cout<<sum<<endl;
}

int main() {
	int n ;
	solve();
	return 0;
}
