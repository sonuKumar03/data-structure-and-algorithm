#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

struct vaccine{
	int start_day;
	int vaccines_perday;
};

void solve(){
	vaccine vaccines[2];
	int vaccines_count;
	cin>>vaccines[0].start_day>>vaccines[0].vaccines_perday>>vaccines[1].start_day>>vaccines[1].vaccines_perday>>vaccines_count;
	int day=1;
	int count=0;
	while(true){
		if(vaccines[0].start_day<=day){
			count+=vaccines[0].vaccines_perday;
		}
		if(vaccines[1].start_day<=day){
			count+=vaccines[1].vaccines_perday;
		}
		if(vaccines_count<=count){
			break;
		}
		day++;
	}
	cout<<day<<endl;		
}

int main(){
	solve();
	return 0;
}