
//DFS-->
//TC-->O(n); n->nodes of graph 
//SC-->O(n)





#include<bits/stdc++.h>
using namespace std;


// vector<int>bfs( int n,vector<int>adj[]){
//   vector<int>visited(n,0);
//   vector<int>ans;
//   queue<int>q;
//   q.push(0);
//   visited[0]=1;
//   //apply here for loop to check non visted nodes..
//   while(!q.empty()){

//       int front=q.front();
//       q.pop();
//       ans.push_back(front);



//      for(auto i:adj[front]){
//      if(visited[i]==0){
//          q.push(i);
//          visited[i]=1;

//           }
//   }




//   }


 

// return ans;




// }

// void dfs(int node,vector<int>&ans,vector<int>adj[],vector<int>&visited){
//    ans.push_back(node);
//    visited[node]=1;
//    for(auto i:adj[node]){
//     if(visited[i]==0){
// //       dfs(i,ans,adj,visited);
// //     }
// //    }


// // }

// bool checkcycle(int i,vector<int>&visited,vector<int>adj[]){
//     queue<pair<int,int>>q;
//     q.push({i,-1});
//     visited[i]=1;

//     while(!q.empty()){
       

//        int node=q.front().first;
//        int prev=q.front().second;

//        q.pop();
//        for(auto i:adj[node]){

//          if(visited[i]==0){
//           q.push({i,node});
//           visited[i]=1;
//          }
//          else if(i!=prev){
//           return true;
//          }

//        }





//     }


// return false;
// }




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
// vector<int>answers=bfs(5,adj);
// for(int i=0;i<answers.size();i++){
//    cout<<answers[i]<<" ";
// }
// cout<<endl;

// vector<int>ans;vector<int>answers=bfs(5,adj);
// for(int i=0;i<answers.size();i++){
//    cout<<answers[i]<<" ";
// }
// cout<<endl;
//   vector<int>ans;

// for(int i=0;i<n;i++){

//   if(visited[i]==0){
//          dfs(i,ans,adj,visited);
//          visited[i]=1;

//           }


// }

// for(int i=0;i<ans.size();i++){
//    cout<<ans[i]<<" ";
// }
// cout<<endl;

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



  
