
BFS_top_sort-->
TC-->O(n+e); n->nodes of graph ,e->edges
SC-->O(n)+O(n); vector+queue





#include<bits/stdc++.h>
using namespace std;

// TC->O(n+k) k total no of edges(sum)
// SC->O(2*vectors)  which we use for storing like dfsvst and vst;


// // vector<int>bfs( int n,vector<int>adj[]){
// //   vector<int>visited(n,0);
// //   vector<int>ans;
// //   queue<int>q;
// //   q.push(0);
// //   visited[0]=1;
// //   //apply here for loop to check non visted nodes..
// //   while(!q.empty()){

// //       int front=q.front();
// //       q.pop();
// //       ans.push_back(front);



// //      for(auto i:adj[front]){
// //      if(visited[i]==0){
// //          q.push(i);
// //          visited[i]=1;

// //           }
// //   }




// //   }


 

// // return ans;




// // }

// // void dfs(int node,vector<int>&ans,vector<int>adj[],vector<int>&visited){
// //    ans.push_back(node);
// //    visited[node]=1;
// //    for(auto i:adj[node]){
// //     if(visited[i]==0){
// // //       dfs(i,ans,adj,visited);
// // //     }
// // //    }


// // // }

// // bool checkcycle(int i,vector<int>&visited,vector<int>adj[]){
// //     queue<pair<int,int>>q;
// //     q.push({i,-1});
// //     visited[i]=1;

// //     while(!q.empty()){
       

// //        int node=q.front().first;
// //        int prev=q.front().second;

// //        q.pop();
// //        for(auto i:adj[node]){

// //          if(visited[i]==0){
// //           q.push({i,node});
// //           visited[i]=1;
// //          }
// //          else if(i!=prev){
// //           return true;
// //          }

// //        }





// //     }


// // return false;
// // }




// // bool cyclecheck(int curr,int prev,vector<int>&visited,vector<int>adj[]){

// //            visited[curr]=1;


// //            for(auto i:adj[curr]){
// //                 if(visited[i]==0){
// //                   if(cyclecheck(i,curr,visited,adj)){
// //                         return true;
// //                   }
                  
// //                 }
// //                 else if(i!=prev){
// //                   return true;
// //                 } }



// //           return false;


// // }



// //cyclecheckdir

// bool cyclecheckdir(int node,vector<int>&vst,vector<int>&dfsvst,vector<int>adj[]){
//       vst[node]=1;
//       dfsvst[node]=1;

//       for(auto i:adj[node]){

//         if(vst[i]==0){
//           vst[i]=1;
//           dfsvst[i]=1;
//           if(cyclecheckdir(i,vst,dfsvst,adj)){
//             return true;
//           }
//         }
//         else if(dfsvst[i]){
//           return true;
//         }

//       }

//     dfsvst[node]=0;
//     return false;

// }



vector<int>topsort_bfs(int n,vector<int>adj[]){
   vector<int>in(n,0);


   for(int i=0;i<n;i++){
           
       for(auto k:adj[i]){

                in[k]++;}}




    vector<int>topsort;
    queue<int>q;



    for(int i=0;i<n;i++){

     if(in[i]==0){
        
        q.push(i);  //pushing first zero incoming

     }}



     while(!q.empty()){

         int elm=q.front();
         q.pop();
         topsort.push_back(elm);
         for(auto i:adj[elm]){

               in[i]--;
               if(in[i]==0){
                q.push(i);
               }



         }





     }








     
     






return topsort;





}















int main(){  

int n;  //no of nodes
cin>>n;  
vector<int>adj[n+1];
for(int i=0;i<n;i++){
  int k;
  cin>>k; // no of edges from that particular node;
  for(int j=0;j<k;j++){
      int m;
      cin>>m;
    adj[i].push_back(m);
  }



}
  vector<int>vst(n,0);
  vector<int>dfsvst(n,0);
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

// int flag=0;
// for(int i=0;i<visited.size();i++){
// if(visited[i]==0){
//   int prev=-1;
//    if(cyclecheck(i,-1,visited,adj)==true){
//       flag=1;
//     cout<<"Cycle Found"<<endl;
//     break;
//    }

// }

// }
// if(flag==0){
//   cout<<"Not Found"<<endl;
// }


// bool flag=false;
//   for(int i=0;i<n;i++){

//      if(vst[i]==0){
//        if(cyclecheckdir(i,vst,dfsvst,adj)){
//         flag=true;
//         cout<<"Cycle found in directed graph"<<endl;
//        }

//      }

//   }

//   if(flag==false){
//     cout<<"Not found Cycle"<<endl;
//   }

vector<int>ans=topsort_bfs(n,adj);
for(auto i:ans){
  cout<<i<<" ";
}
  return 0;


}










