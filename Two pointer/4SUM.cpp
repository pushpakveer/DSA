 // brute force approach...

 //TC->O(N*N*N+NlogN)
 
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>vv;
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                
                
         
            for(int k=j+1;k<n;k++){
                
                int left=(long long)target-(long long)nums[i]-(long long)nums[j]-(long long)nums[k];
                if(binary_search(nums.begin()+k+1,nums.end(),left)){
                    
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    temp.push_back(left);
                    sort(temp.begin(),temp.end());
                    vv.insert(temp);
                    
                }
                
                   }
                
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
        
        
        
        
        
       vector<vector<int>>ans(vv.begin(),vv.end());
        return ans;
        
        
        
        
        
        
        
    }


    // two pointer approach

    


    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            int trgt3=target-nums[i];
           for(int j=i+1;j<n;j++){
            int trgt2=trgt3-nums[j];
               
               int front=j+1;
               int back=n-1;
               
               
               
               while(front<back){
                   
                   
                   if(nums[front]+nums[back]>trgt2){
                       back--;
                   }
                   else if(nums[front]+nums[back]<trgt2){
                       front++;
                   }
                   else{
                       vector<int>a;
                       a.push_back(nums[i]);
                       a.push_back(nums[j]);
                       a.push_back(nums[front]);
                       a.push_back(nums[back]);
                       ans.push_back(a);
                       
                       
                       while(front<back && nums[front]==a[2]){ ++front;}
                       while(front<back && nums[back]==a[3]){ --back;}
                       
                       
                       
                   }
                   
                   
                   
                   
               }
               
               
               
               
               while(j+1<n && nums[j]==nums[j+1]){++j;}
               
               
               
               
               
           }
            
            
            while(i+1<n && nums[i]==nums[i+1]){++i;}
            
            
            
            
        }
        
        
     return ans;   
        
        
    
        
        
        
        
        
        
    }