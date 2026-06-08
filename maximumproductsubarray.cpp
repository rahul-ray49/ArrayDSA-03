class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
          int zerocount=0;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                ++zerocount;
            }
        }
        int prefix=1;
        int suffix=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                prefix=1;
            }
            else{
                prefix=prefix*arr[i];
                maxi=max(maxi,prefix);
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==0){
                suffix=1;
            }
            else{
                suffix=suffix*arr[i];
                maxi=max(maxi,suffix);
            }
        }
        if(zerocount!=0&&maxi<0) return 0;
        return maxi;
    }
};