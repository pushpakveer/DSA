
#TC-O(n)
#SC-O(k)+O(ans)


#include<bits/stdc++.h>
#define ll long long int
using namespace std;


vector<int> neg(vector<int>nums,int k){

      int i=0;
      int j=0;
      queue<int>q;
      vector<int>ans;
      while(j<nums.size()){

           if(nums[j]<0){
            q.push(nums[j]);
           }


           if(j-i+1<k){
            j++;
           }
           else{
              
              if(q.empty()){
                ans.push_back(0);
              }
              else{
                  ans.push_back(q.front());
                  if(nums[i]==q.front()){
                    q.pop();
                  }

              }


              i++;
              j++;
              

           }
        


      }
        return ans;

    }




int main(){

    vector<int>inp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        inp.push_back(t);
    }
    int k;
    cin>>k;
    vector<int>a=neg(inp,k);
      for(auto i:a){
        cout<<i<<" ";
      }
      cout<<endl;
    
    
return 0;
}
