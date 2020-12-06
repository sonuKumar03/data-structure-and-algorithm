#include<iostream>
#include<vector>
using namespace std;


void solve(){
	string str[3];
	int n =0;
	while(n<3){
		getline(cin,str[n]);
		n++;
	}
		
	int **ar = new int*[3];

	for(int i =0;i<3;i++){
		ar[i]=new int[2];
	}
	ar[0][0]='A';
	ar[1][0]='B';
	ar[2][0]='C';

	ar[0][1]=0;
	ar[1][1]=0;
	ar[2][1]=0;


	for(int i =0;i<n;i++){
		string s = str[i];
		int i1 = s[0]-'A';
		int i2 = s[2]-'A';
		if(s[1]=='>'){
			ar[i1][1]++;
		}else if(s[1]=='<'){
			ar[i2][1]++;
		}
	}

	// sort 

	for(int i =0;i<n;i++){
		for(int j =1;j<n-i;j++){
			if(ar[j-1][1]>ar[j][1]){
				int t = ar[j-1][1];
				int t2 = ar[j-1][0];

				ar[j-1][1]=ar[j][1];
				ar[j-1][0]=ar[j][0];

				ar[j][1]=t;
				ar[j][0]=t2;
			}
		}
	}
	int k =0;
	for(int i=0;i<n;i++){
		if(ar[0][1]==ar[i][1]){
			k++;
		}
	}
	if(k==3){
		cout<<"Impossible"<<endl;	
		return ;
	}

	for(int i =0;i<n;i++){
		cout<<(char)ar[i][0];
	}
	cout<<endl;
}

int main(){
	solve();
	return 0;
}