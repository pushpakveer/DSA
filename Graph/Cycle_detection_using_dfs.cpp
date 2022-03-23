
//DFS-->
//TC-->O(n); n->nodes of graph 
//SC-->O(n)





#include<bits/stdc++.h>
using namespace std;






bool cyclecheck(int curr,int prev,vector<int>&visited,vector<int>adj[]){

           visited[curr]=1;


           for(auto i:adj[curr]){
                if(visited[i]==0){
                  if(cyclecheck(i,curr,visited,adj)){
                        return true;
                  }
                  
                }
                else if(i!=prev){
                  return true;
                } }



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
  int prev=-1;
   if(cyclecheck(i,-1,visited,adj)==true){
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



  
