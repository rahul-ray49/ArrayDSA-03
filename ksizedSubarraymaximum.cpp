class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int>dq;
        int i=0;
        int j=0;
        vector<int>ans;
        while(j<arr.size()){
            if((j-i+1)<k){
                while(!dq.empty()&&dq.back()<arr[j]){
                    dq.pop_back();
                }
                dq.push_back(arr[j]);
                ++j;
            }
            else{
                while(!dq.empty()&&dq.back()<arr[j]){
                    dq.pop_back();
                }
                dq.push_back(arr[j]);
                ans.push_back(dq.front());
                if(arr[i]==dq.front()){
                    dq.pop_front();
                }
                ++i;
                ++j;
                
            }
        }
        return ans;
        
    }
};