TC->NLOGN+N (SORT FUNCTION)+(While loop)
SC->vector for ans so O(2);


vector<int>twosum(vector<int>a,int target){


    sort(a.begin(),a.end());
   int i=0;
   int j=a.size()-1;
   vector<int>ans;
    while(i<j){

        if(a[i]+a[j]==target){
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            break;
        }
        else if(a[i]+a[j]>target){
            j--;

        }
        else{
            i++;
        }



    }
   
   return ans;


}