
// TC->O(n*n)
// SC->O(m) m constant

vector<vector<int>> threeSum(vector<int>& nums) {
          sort(nums.begin(),nums.end());  
        vector<vector<int>>ans;
        if(nums.size()==1){
            return ans;
         
        }
        
        for(int i=0;i<(int)(nums.size())-2;i++){
            
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                
              int low=i+1; int hig=(int)(nums.size())-1; int sum=0-nums[i];
                
                
                while(low<hig){
                    
                    if(nums[low]+nums[hig]==sum){
                        
                        vector<int>ins;
                        
                        ins.push_back(nums[i]);
                        ins.push_back(nums[low]);
                        ins.push_back(nums[hig]);
                        ans.push_back(ins);
                        
                 
                    while(low<hig && nums[low]==nums[low+1]){low++;}
                    while(low<hig && nums[hig]==nums[hig-1]){hig--;}
                    low++;
                    hig--;
                      }
                    
                      else if(nums[low]+nums[hig]<sum){low++;}
                       else{hig--;}
                    
                }
                
              
                
                
                
                
                
                
                
                
                
            }
        }
            
            
            
  
        
        
       return ans; 
    }