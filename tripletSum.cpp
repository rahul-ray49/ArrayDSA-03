class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]>target) return false;
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==target) return true;
                if(arr[i]+arr[j]+arr[k]<target){
                    ++j;
                }
                else{
                    if(arr[i]+arr[j]+arr[k]>target){
                        --k;
                    }
                }
            }
        }
        return false;
    }
};