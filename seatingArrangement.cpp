class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        for(int i=0;i<seats.size();i++){
            if(k==0) return true;
            if(seats[i]==0){
                if(i==0){
                    if(seats[i+1]==0){
                        --k;
                        seats[i]=1;
                    }
                }
                else{
                    if(i==seats.size()-1&&seats[i-1]==0) {
                        --k;
                        seats[i]=1;

                    }
                    else{
                        if(seats[i-1]==0&&seats[i+1]==0){
                            --k;
                        seats[i]=1;

                        }
                    }
                }
            }
        }
        if(k==0) return true;
        return false;
    }
};