class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int expected=1;
        sort(arr.begin(),arr.end());
        int i=0;
        for( i=0;i<arr.size();i++){
            if(arr[i]>0){
                if(arr[i]==expected){
                    ++expected;
                }
                else{
                    if(arr[i]>expected) return expected;
                }
            }
        }
        if(i==arr.size()) return expected;
        
    }
};