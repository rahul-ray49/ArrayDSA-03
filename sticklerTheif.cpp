class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int>dp(arr.size(),0);
        dp[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            int a=dp[i-1];
            int b=0;
            if(i-2>=0) b=dp[i-2];
            dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
        }
        return dp[arr.size()-1];
    }
};