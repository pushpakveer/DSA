
//BFS of Graph but not considered components considered as single component.

//TC-->O(n+e);
//SC-->O(n+e)+O(n)+O(n);





#include<bits/stdc++.h>
using namespace std;


vector<int>bfs( int n,vector<int>adj[]){
  vector<int>visited(n,0);
  vector<int>ans;
  queue<int>q;
  q.push(0);
  visited[0]=1;
  //apply here for loop to check non visted nodes..
  while(!q.empty()){

      int front=q.front();
      q.pop();
      ans.push_back(front);



     for(auto i:adj[front]){
     if(visited[i]==0){
         q.push(i);
         visited[i]=1;

          }
  }




  }


 

return ans;




}


int main(){

int n,e;
cin>>n>>e;
vector<int>adj[n+1];
for(int i=0;i<e;i++){

int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);

}

vector<int>answers=bfs(5,adj);
for(int i=0;i<answers.size();i++){
   cout<<answers[i]<<" ";
}
cout<<endl;
  return 0;
}
