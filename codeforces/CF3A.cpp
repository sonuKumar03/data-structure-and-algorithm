//problem  Shortest path of the king
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
using namespace std;
typedef long long ll ;
int squares[8][8];
bool visited[8][8];
vector<string> result;
int _distance[8][8];
struct pos{
  int i,j;
  pos(int a,int b){
    i = a;
    j = b;
  }
};

bool isValid(int i,int j){
  
}
void solve(){
  string source,destination;
  ifstream infile("test");
  infile>>source>>destination;
  queue<pos>_queue;
  _distance[source[0]-'a'][source[1]-'1']=0;
  _queue.push(pos(source[0]-'a',source[1]-'1'));
  visited[source[0]-'a'][source[1]-'1']=true;
  int rows[]= {1, -1, -1,  0,  1, 1, 1 ,0};
  int cols[] = {0,  1, -1, -1, -1, 0, 1, 1 };
  while(!_queue.empty()){
    pos p = _queue.front();
    _queue.pop();
      for(int i =0;i<8;i++){
          int a = p.i + rows[i];
          int b = p.j + cols[i];
          if(isValid(a,b)&& !visited[a][b]){
            printf("%d %d\n", a,b);
            visited[a][b]=true;
            _queue.push(pos(a,b));
          }
      }
    }

    for(int i =0;i<8;i++){
      for(int j =0;j<8;j++){
        cout<<_distance[i][j]<<" ";
      }
      cout<<endl;
    }

  }

int main() {
  for(int i =0;i<8;i++){
    for(int j =0;j<8;j++){
      squares[i][j]=0;
      visited[i][j]=false;
      _distance[i][j]=INT_MAX;
    }
  }
  solve();
  return 0;
}
