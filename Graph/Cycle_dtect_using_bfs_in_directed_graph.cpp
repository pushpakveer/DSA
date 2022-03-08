#include<bits/stdc++.h>
using namespace std;


// same time complexity and space that of bfs topo sort.
// toposort for directed graph detection of cyacle using bfs. 
bool topsort_bfs(int n,vector<int>adj[]){
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

 bool ans=true;
        if(topsort.size()==n){
             ans=false;
        }

      return ans;




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

if(topsort_bfs(n,adj)==true){
  cout<<"Cycle exists"<<endl;
}
else{
cout<<"Not Cycle in Graph"<<endl;
}
  return 0;
}









