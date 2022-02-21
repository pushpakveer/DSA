#include<bits/stdc++.h>
using namespace std;


int maxplat(int s[],int e[],int n){
  sort(s,s+n);
  sort(e,e+n);
  int i=1;
  int j=0;
  int platforms=1;
  int ans=1;

  while(i<n && j<n){
  if(s[i]<=e[j]){
      platforms++;
      i++;
  }
  else if(s[i]>e[j]){
    platforms--;
    j++;
  }
  if(platforms>ans){
     ans=platforms;
  }



  }

   return ans;



}



int main(){

int N = 6;
int start[]={900, 940, 950, 1100, 1500, 1800};
int end[]={910, 1200, 1120, 1130, 1900, 2000};
cout<<maxplat(start,end,N)<<endl;


  return 0;
}