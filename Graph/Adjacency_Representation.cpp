
//graph representation using adjancey matrix
// undirected graph

#include<bits/stdc++.h>
using namespace std;
int main(){

int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n+1];
for(int i=0;i<e;i++){

int u,v,w;
cin>>u>>v>>w;
adj[u].push_back({v,w});
adj[v].push_back({u,w});

}
  return 0;
}