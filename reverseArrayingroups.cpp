class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int idx=0;
        while(idx<arr.size()){
            int si=idx;
            int ei=idx+k-1;
            if(ei>=arr.size()){
                ei=arr.size()-1;
            }
            while(si<=ei){
                swap(arr[si],arr[ei]);
                ++si;
                --ei;
            }
            idx=idx+k;
        }
    }
};