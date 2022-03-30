
TC->O(N)  SC->O(1)

int maxProfit(vector<int>& prices) {
        int mx=INT_MIN;
        int mn=INT_MAX;
     
        for(int i=0;i<prices.size();i++){
           
            if(prices[i]<mn){
             mn=prices[i];
            }
            mx=max(mx,(prices[i]-mn));
            
            
        }
        
        
        return mx;
    }
