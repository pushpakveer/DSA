//KNAPSACK PROBLEM:
// IDEA BEHIND THIS PROBLEM IS TO FIND MAX VALUE WITH GIVEN 
// COMBINATION OF WEIGHTS SO YOU GET MAX VALUES. 


// APPROACH: try to find fraction of val/weight so that u could get max
//            value of per individual weight then sort them according to there
//            fraction..then by running loop over them find the req value; 


// COMPLEXITY:
//            TC->O(NlogN);  sort+loop n+nlogn-->nlogn;
//            SC->O(1);  

// Note:Try to use double as we could get double values....





#include<bits/stdc++.h>
using namespace std;


struct Knap 
{ 
    int val;   
    int weight;  
    int fraction;  
};


bool compare(Knap a, Knap b){
     return (a.fraction>b.fraction);
}


int maxcap(Knap arr[],int n,int w){
  
  sort(arr,arr+n,compare);
  int sum=0;
  int key=w;
  int i=0;
  while(key!=0 && i<=n-1){

     if(arr[i].weight<key){
         sum+=arr[i].fraction*arr[i].weight; 
         key-=arr[i].weight;
          i++;
     }
     else{
      sum+=arr[i].fraction*key;
      key=0;
      break;
      i++;

     }


  }

  

  return sum;


}



int main(){

// int N = 6;
// int start[]={900, 940, 950, 1100, 1500, 1800};
// int end[]={910, 1200, 1120, 1130, 1900, 2000};
// cout<<maxplat(start,end,N)<<endl;

int n;
cin>>n;
int w;
cin>>w;
Knap arr[n];
int x,y;
for(int i=0;i<n;i++){
   cin>>x>>y;
   arr[i].val=x;
   arr[i].weight=y;
   arr[i].fraction=x/y;


}

cout<<maxcap(arr,n,w)<<endl;


  return 0;
}