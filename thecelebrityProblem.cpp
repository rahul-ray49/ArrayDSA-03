class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int>s;
        for(int i=0;i<mat.size();i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(mat[a][b]==0){
                s.push(a);
            }
            else{
                s.push(b);
            }
        }
        int probableidx=s.top();
        int idx=0;
        int count=0;
        for( idx=0;idx<mat.size();idx++){
            if(mat[probableidx][idx]==0&&mat[idx][probableidx]==1){
                ++count;
            }
        }
        if(count==mat.size()-1){
            return probableidx;
        }
        return -1;
        
    }
};