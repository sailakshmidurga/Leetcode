class NumArray {
    private:
    vector<int>p;
public:
    NumArray(vector<int>& nums) {
       p.resize(nums.size()+1);
       p[0] = 0;
       for(int i =1;i<=nums.size();i++)
       {
        p[i] = p[i-1]+nums[i-1];
       } 
    }
    
    int sumRange(int left, int right) {
        return p[right+1]- p[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */