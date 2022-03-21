

//TC-->O(n+e); n->nodes of graph , e->edges of particular node
//SC-->O(n+e)+O(n)+O(n);





#include<bits/stdc++.h>
using namespace std;



bool checkcycle(int i,vector<int>&visited,vector<int>adj[]){
    queue<pair<int,int>>q;
    q.push({i,-1});
    visited[i]=1;

    while(!q.empty()){
       

       int node=q.front().first;
       int prev=q.front().second;

       q.pop();
       for(auto i:adj[node]){

         if(visited[i]==0){
          q.push({i,node});
          visited[i]=1;
         }
         else if(i!=prev){
          return true;
         }

       }





    }


return false;
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
  vector<int>visited(n,0);


int flag=0;
for(int i=0;i<visited.size();i++){
if(visited[i]==0){
   if(checkcycle(i,visited,adj)==true){
      flag=1;
    cout<<"Cycle Found"<<endl;
    break;
   }

}

}
if(flag==0){
  cout<<"Not Found"<<endl;
}


  return 0;

}



  
