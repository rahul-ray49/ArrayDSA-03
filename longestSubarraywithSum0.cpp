class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int prefixSum=0;
        mp[0]=-1;
        int largestsize=0;
        for(int i=0;i<arr.size();i++){
            prefixSum+=arr[i];
            int diff=prefixSum;
            if(prefixSum==0){
                largestsize=max(largestsize,i+1);
            }
            else{
             if(mp.count(diff)!=0){
                if((i-mp[diff])>largestsize){
                    largestsize=max(largestsize,i-mp[diff]);
                }
                
            }
            }
            if(mp.count(prefixSum)==0){
                mp[prefixSum]=i;
            }
           
           
        }
        return largestsize;
        
    }
};