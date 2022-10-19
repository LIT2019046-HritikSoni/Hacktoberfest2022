class NumArray {
public:
    vector<int>vi; //vector to store input vector.
    int sum; //sum of all element of vector 
    NumArray(vector<int>& nums) {
        vi=nums;
        sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
        sum-=vi[index];     //subtract old element  from sum at index and then update by adding new element val.
        vi[index]=val;
        sum+=val;
        
    }
    
    int sumRange(int left, int right) {
        int res=sum; 
        for(int i=0;i<left;i++){    //subtract all element before left and after right
            res-=vi[i];
        }
        for(int i=right+1;i<vi.size();i++){
            res-=vi[i];
        }
        return res;// return res ie. our answer.
    }
};
