class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
     int i=0;
     int j=0;
     while(j<arr.size()){
         while(j<arr.size()&&arr[j]==0){
             ++j;
         }
         if(j<arr.size()){
             swap(arr[i],arr[j]);
         }
         ++j;
         ++i;
     }
    }
};