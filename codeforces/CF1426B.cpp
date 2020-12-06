#include<iostream>
using namespace std;
typedef long long ll;


bool  ispowerof2(int n){
	return n & (n-1)==0;
}

void solve(){
	ll n,m;
	cin>>n>>m;
	ll symetric_squares = 0;
	ll k =1;
	while(k<=n){
			ll **mat = new ll*[2];
			for(int i =0;i<2;i++){
				mat[i]=new ll[2];
			}
			bool flag = true;
			for(int i =0;i<2;i++){
				cin>>mat[i][0]>>mat[i][1];
			}

			for(int i =0;i<2;i++){
				for(int j =0;j<2;j++){
					if(mat[i][j]!=mat[j][i]){
						flag=false;break;
					}
				}
				if(!flag){
					break;
				}
			}
			if(flag){
				symetric_squares++;
			}
		  	k++;
   		}
   		// cout<<symetric_squares<<" "<<m<<" ";
   		if(symetric_squares!=0 && m%symetric_squares==0 && m>=symetric_squares){
   			cout<<"YES\n";
   		}else{
   			cout<<"NO\n";
   		}
}

int main(){
	ll t ;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}