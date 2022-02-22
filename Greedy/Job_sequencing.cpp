//TC->O(N*logN)
//SC->O(N*M)


#include<bits/stdc++.h>
using namespace std;


struct Job 
{ 
    int id;   
    int dead;  
    int profit;  
};


bool compare(Job a, Job b){
     return (a.profit>b.profit);
}


int maxprofit(Job arr[],int n){
  int ans=0;
  sort(arr,arr+n,compare);
  int total_jobs=0;

  for(int i=0;i<n;i++){
     total_jobs=max(arr[i].dead,total_jobs);    
  }

  int deadline[total_jobs+1];
  for(int i=0;i<total_jobs;i++){

   deadline[i]=-1;

  }

  for(int i=0;i<n;i++){
    if(deadline[(arr[i].dead)-1]==-1){
         deadline[(arr[i].dead)-1]=arr[i].profit;
         ans+=arr[i].profit;
    }
    else{
      for(int k=(arr[i].dead)-1;k>=0;k--){
        if(deadline[k]==-1){
            deadline[k]=arr[i].profit;
            ans+=arr[i].profit;
        }
      }

    }
  }

  return ans;


}



int main(){

// int N = 6;
// int start[]={900, 940, 950, 1100, 1500, 1800};
// int end[]={910, 1200, 1120, 1130, 1900, 2000};
// cout<<maxplat(start,end,N)<<endl;

int n;
cin>>n;
Job arr[n];
int x,y,z;
for(int i=0;i<n;i++){
   cin>>x>>y>>z;
   arr[i].id=x;
   arr[i].dead=y;
   arr[i].profit=z;


}

cout<<maxprofit(arr,n)<<endl;


  return 0;
}